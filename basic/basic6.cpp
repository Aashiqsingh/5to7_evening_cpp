#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int b=20;
    int c=30;


    // a > b ? cout<<"a is gretter" : cout<<"b is greater";
    // int ans = a > b ? a : b;
    // cout<<"Answer is "<<ans<<endl;

    // string ans = a > b ? "a is gretter" : "b is greater";
    // cout<<ans<<endl;

    // int ans = a > b && a > c ? a : b > c && b > a ? b : c; 

    int ans = a > b ? (a > c ? a : c) : (b > c ? b : c);
}