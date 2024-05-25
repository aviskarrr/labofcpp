// Create a class College which has data of student’s name, id, marks. Create another class
// Company which is a friend of class College. Get the students’ details for 20 students. Class
// Company should be able to identify the student who scored marks more than 80% and
// eligible to get internship. Finally print the details of the students who are eligible for
// internship in the company.

#include<iostream>
class Company;
class College{
    char studName[20];
    int studId,studMark;
    public:
        College(){
            std::cin>>studName>>studId>>studMark;
        }
    friend class Company;
};

class Company{
    public:
        void checkForInternship(College stud[],int n){
            for(int i=0;i<n;i++){
                if(stud[i].studMark>80){
                    std::cout<<stud[i].studName<<" is elegible for Internship"<<std::endl;
                }
            }

        }
};
int main(){
    const int n=2;
    College stud[n];
    Company c1;
    c1.checkForInternship(stud,n);
    return 0;
}