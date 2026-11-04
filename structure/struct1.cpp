#include<iostream>
#include<stdio.h>
using namespace std;

// structure is also know as user-defined datatype.
// structure is a collection of differenet datatype.
// structure defined with struct keyword.
// to access datamember of structure to create a structure variable / or object.
// structure contain data mamber and member function.

struct student{
    int roll;
    string name;
    int age;


    void setDetails()
    {
        cout<<"Enter roll";
        cin>>roll;
        fflush(stdin);
        cout<<"Enter name";
        getline(cin,name);
        cout<<"Enter age";
        cin>>age;
    }

    void getDetails()
    {
        cout<<"Roll = "<<roll<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
    }


    void demo()
    {
        cout<<"demo function calledd";
    }
};

int main()
{
    struct student s1;
    s1.setDetails();
    s1.getDetails();
}