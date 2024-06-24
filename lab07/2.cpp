// Develop a complete program for an institution, which wishes to maintain a
// database of its staff. The database is divided into number of classes whose
// hierarchical relationship is shown in the following diagram. Specify all the
// classes and define constructors and function to create database and retrieve the
// individual information as per the requirement.
#include<iostream>
#include<string.h>

 class STAFF
 {
    int staff_id;
    public:
        STAFF(){
            staff_id=012;
        }

        void display(){
            std::cout<<staff_id;
        }
 };

 class LECTURER:public STAFF{
    // char sub[20];
    char sub[20];
    public:
        LECTURER(){
            char hi[20]="object orint";
            strcpy(sub,hi);
        }

        void display(){
            std::cout<<sub;
        }
 };

 class ADMIN:public STAFF{
    char post_department[50];
    public:
        ADMIN(){
            char hi[50]="Department of Computer Engineering";
            strcpy(post_department,hi);
        }

        void display(){
            std::cout<<post_department;
        }
 };
 
 class LIBRARIAN:public STAFF{
    char shift[5];
    public:
        LIBRARIAN(){
            char hi[]="day";
            strcpy(shift,hi);
        }
        void display(){
            std::cout<<shift;
        }
 };

 int main(){
    LECTURER lecturer;
    ADMIN admin;
    LIBRARIAN librarian;

    std::cout << "Lecturer Information:" <<std::endl;
    lecturer.display();
    std::cout << std::endl;

    std::cout << "Admin Information:" << std::endl;
    admin.display();
    std::cout << std::endl;

    std::cout << "Librarian Information:" << std::endl;
    librarian.display();
    std::cout << std::endl;

    return 0;

 }