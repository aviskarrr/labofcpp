#include <iostream>
using namespace std;

class temp {
public:
    int& replacement(int &a, int &b) {
        if (a > b) {
            a = 100;
            return a;
        } else {
            b = 100;
            return b;
        }
    }
};

int main() {
    temp obj; 
    int t1, t2;
    cout << "Enter two temperatures: ";
    cin >> t1 >> t2;


    int &result = obj.replacement(t1, t2);


    cout << "Modified temperatures: " << t1 << " " << t2 << endl;

    return 0;
}
