#include <iostream>
#include <fstream>
#include <unordered_map>
#include <queue>
#include <vector>
#include <cmath>
#include <bitset>

using namespace std;

unordered_map<char, string> hashmap;

struct HuffmanNode {
    char character;
    unsigned int freq;
    HuffmanNode *left, *right;
    HuffmanNode(char c, int f) : character(c), freq(f), left(nullptr), right(nullptr) {}
};

struct Compare {
    bool operator()(HuffmanNode* l, HuffmanNode* r) {
        return l->freq > r->freq;
    }
};

void assignCodes(HuffmanNode* root, string str) {
    if (!root) return;
    if (!root->left && !root->right) {
        hashmap[root->character] = str;
    }
    assignCodes(root->left, str + "0");
    assignCodes(root->right, str + "1");
}

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    if (argc != 2) {
        cerr << "Invalid cmd line arg. Usage: ./a.out <input file>\n";
        return 1;
    }

    ifstream input(argv[1], ios::binary);
    if (!input) {
        cerr << "Error opening input file\n";
        return 2;
    }

    string in = argv[1];
    string filetype = in.substr(in.find(".") + 1);
    string out = in.substr(0, in.find(".")) + "-compressed.bin";

    ofstream output(out, ios::binary);
    if (!output) {
        cerr << "Error creating output file\n";
        return 3;
    }

    unordered_map<char, int> freq;
    char ch;
    while (input.get(ch)) {
        freq[ch]++;
    }
    input.clear();
    input.seekg(0, ios::beg);

    priority_queue<HuffmanNode*, vector<HuffmanNode*>, Compare> minHeap;
    for (auto& pair : freq) {
        minHeap.push(new HuffmanNode(pair.first, pair.second));
    }

    while (minHeap.size() > 1) {
        HuffmanNode* left = minHeap.top();
        minHeap.pop();
        HuffmanNode* right = minHeap.top();
        minHeap.pop();
        HuffmanNode* internalNode = new HuffmanNode('\0', left->freq + right->freq);
        internalNode->left = left;
        internalNode->right = right;
        minHeap.push(internalNode);
    }

    HuffmanNode* root = minHeap.top();
    assignCodes(root, "");

    string fileContents;
    while (input.get(ch)) {
        fileContents += hashmap[ch];
    }
    input.close();

    int padding = (8 - fileContents.size() % 8) % 8;
    for (int i = 0; i < padding; ++i) {
        fileContents = "0" + fileContents;
    }

    output << static_cast<char>(filetype.size());
    output.write(filetype.c_str(), filetype.size());

    for (auto& pair : hashmap) {
        output << pair.first << pair.second << '\0';
    }
    output << '\0' << padding << '\0' << '\0';

    for (size_t i = 0; i < fileContents.size(); i += 8) {
        bitset<8> bits(fileContents.substr(i, 8));
        output << static_cast<char>(bits.to_ulong());
    }

    cout << "Compressed File successfully\n";
    output.close();

    // Clean up dynamically allocated memory
    // (optional: implement a destructor for the tree to handle this automatically)

    return 0;
}
