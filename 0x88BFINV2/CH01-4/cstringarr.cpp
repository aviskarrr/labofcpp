#include<iostream>
#include<cstring>
using namespace std;
class Person
{
char name[20];
int ctzn;
char dob[10];
public:
void getPerson()
{
cout<<"Enter details of person"<<endl;
cin>>name>>ctzn>>dob;
}
char * returnName()
{
return name;
}

int returnCtzn()
{
return ctzn;
}
char * returnDob()
{
return dob;
}
};
class Doctor
{
char dept[50];
char dqual[50];
public:
void getDoctor()
{
cout<<"Enter doctor details:"<<endl;
cin>>dept>>dqual;
}

void showDoctor(char n[],int c,char dob[])
{
cout<<"The details of doctor are:"<<endl;
cout<<n<<endl<<c<<endl<<dob<<endl<<dept<<endl<<dqual;
}
};
int main()
{
Person p;
Doctor d;
p.getPerson();
d.getDoctor();
d.showDoctor(p.returnName(),p.returnCtzn(),p.returnDob());
return 0;
}
