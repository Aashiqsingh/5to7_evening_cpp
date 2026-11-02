#include<iostream>
using namespace std;


int main()
{
    // pointer : pointer is a variable that store address of another variable.
    int a = 10;
    
    int *p;
    p = &a;

    cout<<"Address of a: "<<&a<<endl;
    cout<<"Address of a using pointer p: "<<p<<endl;
    cout<<"Value of a using pointer p: "<<*p<<endl;
    *p = 20;
    cout<<"Value of a after changing using pointer p: "<<a<<endl;

    cout<<"address of pointer variable "<<&p<<endl;
    
}