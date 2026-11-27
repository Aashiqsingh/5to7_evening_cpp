#include<iostream>

using namespace std;

class Employee{

    int id,exp,salary;
    string name;
    public:

    Employee(int id,string name,int exp,int sal)
    {
        this->id = id;
        this->name = name;
        this->exp = exp;
        salary = sal;
    }

    void calculateGrossSal()
    {
        int gross;
        if(salary > 20000)
        {
            gross = salary + 1000 + 2000;
        }
        else{
            gross = salary + 500 + 1000;
        }

        cout<<"Id = "<<this->id<<endl;
        cout<<"Name = "<<this->name<<endl;
        cout<<"experience = "<<this->exp<<endl;
        cout<<"Salary = "<<this->salary<<endl;
        cout<<"Gross salary = "<<gross<<endl;
    }
    Employee(int experience,string name);

};

Employee::Employee(int experience,string name)
{
    this->exp = experience;
    this->name = name;
}


int main()
{

    Employee emp1(1,"dhruvi",3,25000);

    emp1.calculateGrossSal();

    Employee emp2(5,"kavyaa");
    emp2.calculateGrossSal();

    
}