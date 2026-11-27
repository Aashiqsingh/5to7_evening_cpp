#include<iostream>

using namespace std;

class Bank{
    public:

    string name;
    int age,bal;

    void setDetails(string name,int age)
    {
        this->name = name;
        this->age = age;
    }

    Bank()
    {
        this->bal = 1000;
    }

    void display()
    {
        cout<<name<<"\t"<<age<<"\t"<<bal<<endl;
    }

};

int main()
{
    Bank b1,b2; // constructor

    b1.setDetails("dhruvi",17);
    b1.display();

    b2.name = "shreya";
    b2.age = 18;
    
    b2.display();
}