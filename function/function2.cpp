#include<iostream>
using namespace std;

string lasvegas(int amt,string name)
{
    cout<<name<<" ur tour confirm in lasvegas with budget "<<amt<<endl;
}

string dubai(int amt,string name)
{
    cout<<name<<" ur tour confirm in dubai with budget "<<amt<<endl;
}

string goa(int amt,string name)
{
    cout<<name<<" ur tour confirm in goa with budget "<<amt<<endl;
}

int main()
{
    int budget;
    cout<<"Enter ur budget :";
    cin>>budget;
    
    if(budget>4000)
    {
        lasvegas(budget,"tejas");
    }
    else if(budget>3000 )
    {
        dubai(budget,"tejas");
    }
    else if(budget>2000)
    {
        goa(budget,"rudra");
    }
    else{
        cout<<"You have insufficient budget..";
    }
}