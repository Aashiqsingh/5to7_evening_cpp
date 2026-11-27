// There are fout types of constructor 
// 1. default contructor
// 2. parameterized constructro
// 3. copy constructor 
// 4. constructor overloaded

#include<iostream>
using namespace std;

class Demo{

    public:

    Demo()
    {
        cout<<"Default constructor called...";
    }

    Demo(int a)
    {
        cout<<"Parametrized constructor called..";
        cout<<"a = "<<a;
    }

    Demo(int a,string name)
    {
        cout<<"Parametrized contructor called second..";
    }

};

int main()
{
    Demo d;

    Demo d2(10);
    Demo d3(10,"ram");
}