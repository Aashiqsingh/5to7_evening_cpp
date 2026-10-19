#include<iostream>
using namespace std;

int main()
{
    // char name[20];
    // cout<<"Enter your name: ";
    // cin>>name;

    // // cout<<"Name = "<<name[0]<<endl; // shreya
    // for(int i=0;i<6;i++)
    // {
    //     cout<<name[i];
    // }

    string name;
    cout<<"Enter your name: ";
    // cin>>name;
    getline(cin,name);

    cout<<"Name = "<<name<<endl; // shreya

    // int len=0;
    // for(int i=0;i<name[len]!='\0';i++)
    // {
    //     len++;
    // }
    // cout<<"Length of name = "<<len<<endl;

    cout<<"length of name =  "<<name.length()<<endl;

}