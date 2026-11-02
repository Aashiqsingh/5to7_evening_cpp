#include<iostream>
using namespace std;

int* test()
{
    int amount = 100;
    int *ptr = &amount;

    cout<<"Value of amount: "<<*ptr<<endl;
    return ptr;
}

int main()
{
    int *ans = test();
    cout<<"Address of amount: "<<ans<<endl;
    *ans = 200;
    cout<<"Value of amount: "<<*ans<<endl;
}