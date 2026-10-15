#include<iostream>
using namespace std;

int main()
{
    int a,b;

    cout<<"Enter two numbers :";
    cin>>a>>b;

    cout<<"1 - Add\n2 - Sub\n3 = Mul\n4 - Div\n5 - Mod\nEnter your choice";
    int ch;
    cin>>ch;

    switch(ch)
    {
        case 1:
            cout<<a+b<<endl;
            break;
        case 2:
            cout<<a-b<<endl;
            break;
        case 3:
            cout<<a*b<<endl;
            break;
        case 4:
            cout<<a/b<<endl;
            break;
        case 5:
            cout<<a%b<<endl;
            break;
        default:
            cout<<"Wrong choice"<<endl;
    }
}


