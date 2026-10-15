#include<iostream>
using namespace std;

int main()
{
    bool isActive = 1;
    bool isMarried = true;
    int isChild = 2;

    if(isActive)
    {
        cout<<"ALIVE"<<endl;

        if(isMarried)
        {
            cout<<"MARRIED"<<endl;
            if(isChild>0)
            {
                cout<<"Have CHILD"<<endl;
            }
            else{
                cout<<"No CHILD"<<endl;
            }
        }
        else{
            cout<<"SINGLE"<<endl;
        }
    }
    else{
        cout<<"DEAD"<<endl;
    }
}