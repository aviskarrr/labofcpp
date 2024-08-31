#include <iostream>
#include <fstream>
using namespace std;

class inv {
    int itemID;
    char name[20];
    float price;
    char mfdDate[20];
    char company[30];
public:
    void getdata() {
        cout << "Enter the following:\n1. Item ID\n2. Name\n3. Price\n4. Date\n5. Company Name:\n";
        cin >> itemID >> name >> price >> mfdDate >> company;
    }
    
    void showdata() const {
        cout << "Item ID: " << itemID << endl
            << "Name: " << name << endl
            << "Price: " << price << endl
            << "Manufacture Date: " << mfdDate << endl
            << "Company: " << company << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of data entries:\n";
    cin >> n;
    
    inv* i = new inv[n];
    
    // Open the file for writing
    fstream f;
    f.open("data.dat", ios::out | ios::binary);
    if (!f) {
        cerr << "Error opening file for writing!" << endl;
        delete[] i;
        return 1;
    }

    // Input data and write to the file
    for (int j = 0; j < n; ++j) {
        cout << "Enter details for item " << j + 1 << ":\n";
        i[j].getdata();
        f.write(reinterpret_cast<char*>(&i[j]), sizeof(i[j]));
    }
    
    f.close();
    delete[] i;

    cout << "Reading data:\n";
    
    // Open the file for reading
    f.open("data.dat", ios::in | ios::binary);
    if (!f) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }
    
    inv r;
    while (f.read(reinterpret_cast<char*>(&r), sizeof(r))) {
        r.showdata();
        cout << endl;  // Add a newline for better readability
    }
    
    f.close();
    return 0;
}
