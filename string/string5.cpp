#include<iostream>
using namespace std;

int main()
{
    string str;

    cout<<"Enter string"<<endl;
    getline(cin,str);

    for(int i=0;i<str[i]!='\0';i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            cout<<char(str[i]-32);
        }
        else{
            cout<<char(str[i]+32);
        }
    }
}