#include <iostream>
#include <fstream>
using namespace std;

class person {
protected:
    char name[20];
    int age;
public:
    void getData() {
        cout << "Enter name and age: ";
        cin >> name >> age;
    }

    void showData() const {
        cout << name << "\t" << age << endl;
    }
};

int main() {
    person p;
    fstream file;
    int choice;
    
    do {
        // Open file in append mode to add records
        file.open("group.dat", ios::out | ios::app | ios::binary);
        if (!file) {
            cerr << "Error opening file for writing!" << endl;
            return 1;
        }

        p.getData();
        file.write(reinterpret_cast<char*>(&p), sizeof(p));
        file.close();

        cout << "Record added successfully!" << endl;
        cout << "Do you want to add another record? (1 for Yes, 0 for No): ";
        cin >> choice;
    } while (choice == 1);

    // Read specific record
    int recordNumber;
    cout << "\nEnter the record number you want to view: ";
    cin >> recordNumber;

    // Open file in read mode
    file.open("group.dat", ios::in | ios::binary);
    if (!file) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }

    // Calculate position and seek to that record.
    file.seekg((recordNumber - 1) * sizeof(p));
    if (file.read(reinterpret_cast<char*>(&p), sizeof(p))) {
        p.showData();
    } else {
        cerr << "Record not found!" << endl;
    }

    file.close();

    // Display all records
    cout << "\nAll records in the file:\n";
    file.open("group.dat", ios::in | ios::binary);
    if (!file) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }

    while (file.read(reinterpret_cast<char*>(&p), sizeof(p))) {
        p.showData();
    }

    file.close();

    return 0;
}
