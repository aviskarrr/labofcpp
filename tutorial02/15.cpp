#include <iostream>
#include <string>
using namespace std;

// Base class: Book
class Book {
protected:
    string author;
    float price;

public:
    Book(const string& a = "", float p = 0.0) : author(a), price(p) {}

    // Function with the same name across classes
    void display() const {
        cout << "Author: " << author << ", Price: $" << price << endl;
    }
};

// Base class: Stock
class Stock {
protected:
    int numBooks;
    string category;

public:
    Stock(int num = 0, const string& cat = "") : numBooks(num), category(cat) {}

    // Function with the same name across classes
    void display() const {
        cout << "Number of books: " << numBooks << ", Category: " << category << endl;
    }
};

// Derived class: Library (multiple inheritance)
class Library : public Book, public Stock {
public:
    Library(const string& a = "", float p = 0.0, int num = 0, const string& cat0 = "")
        : Book(a, p), Stock(num, cat0) {}

    // Function with the same name across classes
    void display() const {
        Book::display(); // Call display from Book
        Stock::display(); // Call display from Stock
    }
};

int main() {
    // Create an instance of Library
    Library book1("John Doe", 25.0, 100, "Fiction");

    // Display information using the Library's display function
    cout << "Details of Book in Library:" << endl;
    book1.display();

    return 0;
}
