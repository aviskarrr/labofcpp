#include <iostream>
#include <fstream>
#include <conio.h> // Note that this is non-standard, only available on certain platforms like Windows

int main() {
    std::fstream file("student.txt", std::ios::out);
    std::cout<<"enter a text: "<<std::endl;
    char ch;
    do
    {
        ch = std::cin.get(); 
        file<<ch;
    } while (ch!='\n');
    file.close();
    return 0;
}
