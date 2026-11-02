#include<iostream>
using namespace std;

void test()
{
    static int a = 10;
    a++;
    cout<<"value of a = "<<a<<endl;
}

int main()
{
    test();
    test();
    test();
}