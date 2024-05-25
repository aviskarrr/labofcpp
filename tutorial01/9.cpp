// Create a class Product which has details of Product code, price, customer name and salesID.
// There should be a serial number that indicates the number of sales made which will also
// be salesID for that sales. Finally display the list the details of all the sales made so far.
#include<iostream>
#include<cstring>

class Product {
    static int salesCounter;
    int productCode, salesId;
    float productPrice;
    char customerName[30];
    public:
        Product(int a, float b, const char c[]) : productCode(a), productPrice(b) {
            strcpy(customerName, c); 
            salesCounter++;
            salesId = salesCounter;
        }

        void display() {
            std::cout << "Sales ID: " << salesId << std::endl;
            std::cout << "Product Code: " << productCode << std::endl;
            std::cout << "Price: Rs." << productPrice << std::endl;
            std::cout << "Customer Name: " << customerName << std::endl;
            std::cout << "\n";
        }
};

int Product::salesCounter = 0;

int main() {
    Product P1(122, 2033.21, "Ram Parajuli");
    Product P2(12222, 1521.1125, "Sita Gurung");
    Product P3(1333, 30213.3, "Gopal Dhakal");

    P1.display();
    P2.display();
    P3.display();
    return 0;
}
