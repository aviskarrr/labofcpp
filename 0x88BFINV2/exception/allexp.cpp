#include <iostream>
using namespace std;

int main() 
{
    int a, b;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;

    try {
        if (b == 0)
            throw a;
        if (b < 0)
            throw 1.0;

        cout << "Quotient = " << a / b;
    }
    catch (int) {
        cout << "Division by zero" << endl;
    }
    catch (...) {
        cout << "Other Exceptions" << endl;
    }

    return 0;
}
