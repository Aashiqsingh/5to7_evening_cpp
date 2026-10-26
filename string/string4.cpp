#include<iostream>
using namespace std;


int main()
{
    string str = "Royal technosoft p ltd.";
    int i=0;
    int count=1;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
    }
    cout<<"Space count = "<<count<<endl;
}