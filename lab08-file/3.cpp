#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class student {
    int roll; 
    char name[30];
    float marks;
public:
    student(int r=0, const char* n="\n", float m=0.00) {
        roll = r;
        strcpy(name, n);
        marks = m;
    }
    void getdata() {
        cout << "Enter roll no: ";
        cin >> roll;
        cout << "Enter name: ";
        cin.ignore(); // Clear the newline character left in the buffer
        cin.getline(name, 30);
        cout << "Enter marks: ";
        cin >> marks;
    }
    void display(){
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

void writeToFile() {
    student s;
    fstream file("student.dat", ios::binary | ios::out | ios::app); // Append mode
    if (!file) {
        cerr << "File could not be opened for writing!" << endl;
        return;
    }
    
    cout << "Enter data of student:" << endl;
    s.getdata();
    file.write(reinterpret_cast<char*>(&s), sizeof(s));
    file.close();
    cout << "Data written to file successfully." << endl;
}

void readToFile() {
    student s;
    fstream file("student.dat", ios::binary | ios::in);
    if (!file) {
        cerr << "File could not be opened for reading!" << endl;
        return;
    }
    
    cout << "Data of students:" << endl;
    while (file.read(reinterpret_cast<char*>(&s), sizeof(s))) {
        s.display();
        cout << "-------------------------" << endl;
    }
    
    file.close();
    cout << "All data read from file successfully." << endl;
}

void readNthRecord(int n) {
    student s;
    fstream file("student.dat", ios::binary | ios::in);
    if (!file) {
        cerr << "File could not be opened for reading!" << endl;
        return;
    }
    
    // Move the file pointer to the nth record
    file.seekg(n * sizeof(student), ios::beg);
    
    // Read the nth record
    if (file.read(reinterpret_cast<char*>(&s), sizeof(s))) {
        cout << "Data of " << n + 1 << "th student:" << endl; // Adjust for 1-based indexing
        s.display();
    } else {
        cout << "Could not read the " << n + 1 << "th record (may not exist)." << endl;
    }
    
    file.close();
}

int main() {
    while (true) {
        int choice;
        int n;
        cout << "Enter your choice (1: Write, 2: Read All, 3: Read Nth, 4: Exit): ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                writeToFile();
                break;
            case 2:
                readToFile();
                break;
            case 3:
                cout << "Enter the record number you want to read: ";
                cin >> n;
                readNthRecord(n - 1); // Adjust for 0-based indexing
                break;
            case 4:
                exit(0);
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }
    return 0;
}
