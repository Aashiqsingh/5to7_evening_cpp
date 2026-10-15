#include<iostream>
using namespace std;

int main()
{
    bool isActive = false;
    int age = 17;

    if(isActive == true)
    {
        cout<<"You are active"<<endl;
        if(age > 18)
        {
            cout<<"You are eligible for voting"<<endl;
        }
        else{
            cout<<"You are not eligible for voting"<<endl;
        }
    }
    else{
        cout<<"You are not active"<<endl;
    }
}