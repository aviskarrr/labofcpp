#include<iostream>
class Student{
    protected:
        char name[10];
    public:
        void getdata(){
            std::cin>>name;
        }
        void showdata(){
            std::cout<<name;
        }
};

class Exam{
    protected:
        float marks;
    public:
        void getdata(){
            std::cin>>marks;
        }
        void showdata(){
            std::cout<<marks;
        }
};

class MarkSheet:public Student,public Exam{
    private:
        float percentage;
    public:
        void getdata(){
            std::cin>>percentage;
        }
        void showdata(){
            std::cout<<percentage;

        }
};
int main(){
    MarkSheet M;
    M.Student::getdata();
    M.Student::showdata();
    M.Exam::getdata();
    M.Exam::showdata();
    M.getdata();
    M.showdata();
    return 0;
}