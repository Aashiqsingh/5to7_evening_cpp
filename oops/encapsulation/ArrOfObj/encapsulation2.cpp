#include<iostream>

using namespace std;

class Employee{
    int id;
    string name;
    long int salary;

    public:

    void setDetail();

    void getDetails();

};

void Employee::setDetail()
{
        cout<<"Enter id :";
        cin>>id;
        cin.ignore();
        cout<<"Enter name :";
        getline(cin,name);
        cout<<"Enter salary :";
        cin>>salary;
}

void Employee::getDetails()
{
        cout<<id<<"\t"<<name<<"\t"<<salary<<endl;
}


int main()
{
    Employee e[4];

    for(int i=0;i<4;i++)
    {
        e[i].setDetail();
    }

    cout<<"Id\tName\tSalary\n";

    for(int i=0;i<4;i++)
    {
        e[i].getDetails();
    }

}