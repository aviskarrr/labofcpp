#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class student {
protected:
    int rollNumber;
    char name[20];
    int age;
public:
    void getData() {
        cout << "Enter roll number, name, and age: ";
        cin >> rollNumber >> name >> age;
    }

    void showData() const {
        cout << rollNumber << "\t" << name << "\t" << age << endl;
    }

    int getRollNumber() const {
        return rollNumber;
    }
};

// Function to search for a record by roll number
bool searchByRollNumber(fstream &file, int rollNumber, student &s) {
    file.clear();  // Clear any errors
    file.seekg(0, ios::beg);  // Go to the beginning of the file

    while (file.read(reinterpret_cast<char*>(&s), sizeof(s))) {
        if (s.getRollNumber() == rollNumber) {
            return true;
        }
    }
    return false;
}

int main() {
    student s;
    fstream file;
    int choice;

    do {
        // Open file in append mode to add records
        file.open("students.dat", ios::out | ios::app | ios::binary);
        if (!file) {
            cerr << "Error opening file for writing!" << endl;
            return 1;
        }

        s.getData();
        file.write(reinterpret_cast<char*>(&s), sizeof(s));
        file.close();

        cout << "Record added successfully!" << endl;
        cout << "Do you want to add another record? (1 for Yes, 0 for No): ";
        cin >> choice;
    } while (choice == 1);

    // Search for a student by roll number
    int rollNumberToSearch;
    cout << "\nEnter the roll number you want to search: ";
    cin >> rollNumberToSearch;

    // Open file in read mode
    file.open("students.dat", ios::in | ios::binary);
    if (!file) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }

    if (searchByRollNumber(file, rollNumberToSearch, s)) {
        cout << "\nStudent record found:\n";
        s.showData();
    } else {
        cerr << "Student record not found!" << endl;
    }

    file.close();

    // Display all records
    cout << "\nAll records in the file:\n";
    file.open("students.dat", ios::in | ios::binary);
    if (!file) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }

    while (file.read(reinterpret_cast<char*>(&s), sizeof(s))) {
        s.showData();
    }

    file.close();

    return 0;
}
