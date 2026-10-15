#include<iostream>
using namespace std;

int main()
{
    int i;


    // for(i=1;i<=10;i++)
    // {
    //     // cout<<"Hello"<<endl;
    //     cout<<i<<endl;
    // }



    for(i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}