#include<iostream>
using namespace std;

string lasvegas(int amt,string name)
{
    return name + " ur tour confirm in lasvegas with budget ";
}

string dubai(int amt,string name)
{
    return name + " ur tour confirm in dubai with budget ";
}

string goa(int amt,string name)
{
    return name + " ur tour confirm in goa with budget ";
}

int main()
{
    int budget;
    cout<<"Enter ur budget :";
    cin>>budget;

    string ans;
    
    if(budget>4000)
    {
        ans = lasvegas(budget,"tejas");
    }
    else if(budget>3000 )
    {
        ans = dubai(budget,"tejas");
    }
    else if(budget>2000)
    {
        ans = goa(budget,"rudra");
    }
    else{
        cout<<"You have insufficient budget..";
    }

    cout<<ans;
}