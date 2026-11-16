#include<iostream>
#include<stdio.h>
using namespace std;

struct employees{
    int id;
    string name;
    float salary;

    void setDetails()
    {
        cout<<"Enter id ";
        cin>>id;
        fflush(stdin);
        cout<<"Enter name ";
        getline(cin,name);
        cout<<"Enter salary ";
        cin>>salary;
    }


    void display()
    {
        cout<<id<<"\t"<<name<<"\t"<<salary<<endl;
    }


}e[3];

int main()
{
    // struct employees e[3];

    for(int i=0;i<3;i++)
    {
        cout<<"Enter "<<i+1<<" Employee details :"<<endl;
        e[i].setDetails();
    }

    cout<<"\nEmployee Details"<<endl;
    for(int i=0;i<3;i++)
    {
        e[i].display();
    }

    int max=0;
    for(int i=1;i<3;i++)
    {
        if(e[i].salary > e[max].salary)
        {
            max = i;
        }
    }

    cout<<"Max salary employee details "<<endl;
    cout<<e[max].id<<"\t"<<e[max].name<<"\t"<<e[max].salary<<endl;
    // cout<<"Max salary "<<max<<endl;
}