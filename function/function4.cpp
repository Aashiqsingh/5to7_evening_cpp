#include<iostream>

using namespace std;

// int test(int a)
// {
//     cout<<"Addition = "<<a+b;
// }


int test(int a=0,int b)
{
    cout<<"Addiiton = "<<a+b<<endl;
}

int main()
{
    test(3);
    // test(3,4);
}