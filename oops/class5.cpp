#include<iostream>
using namespace std;


class Employee{
    public:
    int a,b;

    // void display()
    // {
    //     cout<<"value of a = "<<a<<"\nvalue of b = "<<b<<endl;
    // }

    void display();
};

void Employee::display()
{
    cout<<"value of a = "<<a<<"\nvalue of b = "<<b<<endl;
}

int main()
{
    Employee emp;

    emp.a = 19;
    emp.b = 20;

    emp.display();
}