#include <iostream>
#include <fstream>
using namespace std;

class person {
protected:
    char name[20];
    int age;
public:
    void red() {
        cin >> name >> age;
    }
    void dis() {
        cout << name << endl << age << endl;
    }
};

int main() {
    person p, q;
    fstream file;
    char ch;

    file.open("1.txt", ios::out | ios::binary);
    if (!file) {
        cerr << "Error opening file for writing!" << endl;
        return 1;
    }

    do {
        p.red();
        file.write(reinterpret_cast<char*>(&p), sizeof(p));
        cout << endl << "Enter another data (y/n)? ";
        cin >> ch;
    } while (ch == 'y');

    file.close();  // Close the file after writing

    file.open("1.txt", ios::in | ios::binary);
    if (!file) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }

    while (file.read(reinterpret_cast<char*>(&q), sizeof(q))) {
        q.dis();
    }

    file.close();  // Close the file after reading

    return 0;
}
