#include <iostream>

class GP {
public:
    void displayG() {
        std::cout << "Hi, I'm grandparent\n";
    }
};

class P1 : public virtual GP {
public:
    void displayP1() {
        std::cout << "Hi, I'm parent1\n";
    }
};

class P2 : public virtual GP {
public:
    void displayP2() {
        std::cout << "Hi, I'm parent2\n";
    }
};

class C : public P1, public P2 {
public:
    void displayC() {
        std::cout << "Hi, I'm child\n";
    }
};

int main() {
    C c1;
    c1.displayG();
    c1.displayP1();
    c1.displayP2();
    c1.displayC();

    return 0;
}
