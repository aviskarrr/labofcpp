#include<iostream>
class Student{
    protected:
        int roll;
    public:
        void getroll(){
            std::cout<<"Enter roll"<<std::endl;
            std::cin>>roll;
        }
        void displayroll(){
            std::cout<<"roll :"<<roll;
        }
};


class Exam:public Student{
    protected:
        int sub1,sub2;
    public:
        void getmarks(){
            std::cout<<"Enter 2 marks"<<std::endl;
            std::cin>>sub1>>sub2;
        }
        void displaymarks(){
            std::cout<<"sub 1: "<<sub1<<" sub 2: "<<sub2;
        }
};

class Result:public Exam{
    private:
        int total;
    public:
        void calcresult(){
            total=Exam::sub1+Exam::sub2;
        }
        void displayresult(){
            std::cout<<total;
        }
};

int main(){
    Result r;
    r.Student::getroll();
    r.Student::displayroll();
    r.Exam::getmarks();
    r.Exam::displaymarks();
    r.calcresult();
    r.displayresult();
    return 0;
}