#include <iostream>
#include <fstream>
#include <conio.h>

int main() {
    std::fstream file("student.txt", std::ios::in);
    // std::cout<<"enter a text: "<<std::endl;
    char ch;
     while (file.get(ch)) {
        std::cout << ch;
    }
    file.close();
    return 0;
}
