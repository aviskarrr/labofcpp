#include<iostream> 
using namespace std; 
void Calculate(int a,int b){ 
try{ 
cout<<"\nInside inner try block"; 
if(b==0) 
throw b; 
cout<<"\nQuotation is:"<<a/b<<endl; 
}
catch(int) 
{
cout<<"\nInside inner catch"; 
throw; 
}
}
int main() 
{
int c,d; 
cout<<"\nEnter the value of c and d:"; 
cin>>c>>d; 
try 
{
cout<<"\nInside outer try block"; 
Calculate(c,d); 
}
catch(int) 
{
cout<<"\nInside outer Catch"; 
cout<<"\nException due to 0"<<endl; 
}
return 0; 
}
