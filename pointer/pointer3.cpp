#include<iostream>
using namespace std;

void test()
{
    cout<<"Inside test function"<<endl;
}

void demo()
{
    cout<<"Inside demo function"<<endl;
}

int main()
{
    void(*p)();

    string name = "test";

    if(name == "demo")
    {
        p = demo;
    }
    else if(name == "test")
    {
        p = test;
    }

    p();
}