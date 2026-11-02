#include<iostream>
using namespace std;

void sum(int a,int b=0,int c=0)
{
    int add = a+b+c;
    cout<<"Addition = "<<add<<endl;
}

int main()
{
    sum(10,20,30);
    sum(10,20);
    sum(19);
}