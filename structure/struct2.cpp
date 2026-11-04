#include<iostream>
using namespace std;

struct employee{
    int id;
    string name;
    int salary;

    void setDetails(int id,string name,int salary) // member function
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }

    void display()
    {
        cout<<id<<"\t"<<name<<"\t"<<salary<<endl;
    }

};

int main()
{
    struct employee emp[3]; 

    emp[0].setDetails(101,"dhruvi",2000);
    emp[1].setDetails(102,"shreya",4500);
    emp[2].setDetails(103,"kapil",999);


    cout<<"Id\tName\tSalary"<<endl;
    for(int i=0;i<3;i++)
    {
        emp[i].display();
    }


    int max=0;
    for(int i=0;i<3;i++)
    {
        if(emp[i].salary > emp[max].salary)
        {
            max = i;
        }
    }
    
    // cout<<"Max Salary Employee Name = "<<emp[max].name;

    emp[max].display();

}