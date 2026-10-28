#include<iostream>

using namespace std;

void demo()
{
    cout<<"demo function called.."<<endl;
}

int add(int a,int b)
{
    return a+b;
}

int main()
{
    demo();

    cout<<"Addition = "<<add(3,4);
}