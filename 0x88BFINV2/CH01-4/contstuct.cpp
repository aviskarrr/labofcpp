#include<iostream>
using namespace std;

class cont {
public:
    int a;
    char* c;

    cont() {
        c = "default";
        cout << c << endl;
    }   

    cont(int b) {
        a = b;
        c = "param";
        cout << c << endl;
    }

    cont(const cont &other) {
        a = other.a;
        c = other.c; // Shallow copy for simplicity
    }
    void display();
};

void cont::display(){
    // cout<<a;
    cout<<endl<<c;
}

int main() {
    cont obj1;
    cont obj2(10);
    cont obj3 = obj1;
    obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}
