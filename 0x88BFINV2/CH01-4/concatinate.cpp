#include<iostream>
#include<cstring>
using namespace std;

class con {
    char str11[40];
    char str22[40];
public:
    void conc(const char* c1, const char* c2);
};

void con::conc(const char* c1, const char* c2) {
    // Copy the input strings into str11 and str22
    strcpy(str11, c1);  // Copy c1 to str11
    strcpy(str22, c2);  // Copy c2 to str22

    // Concatenate str22 to the end of str11
    strcat(str11, str22);

    // Print the concatenated string
    cout << str11 << endl;
}

int main() {
    con c1;
    c1.conc("hi", "bye");

    return 0;
}
