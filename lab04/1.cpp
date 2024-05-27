//WAP to find the sum and average of the number by using new and delete
// operator. Also use static_cast casting operator.

#include <iostream>
using namespace std;

int main() {
    int *ptr;
    ptr = new int[10];
    int sum = 0;

    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> ptr[i];
    }

    for (int i = 0; i < 10; i++) {
        sum += ptr[i];
    }
    // Calculate the average
    float avg = static_cast<float>(sum) / 10;
    cout <<"the sum is: "<< sum <<endl;

    cout << "The average is: " << avg << endl;

    // Clean up the dynamically allocated memory
    delete[] ptr;

    return 0;
}