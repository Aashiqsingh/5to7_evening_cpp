#include<iostream>
using namespace std;

int main()
{
    string fname = "shreya";
    string lname = "shreya";

    bool flag = true;

    if(fname.length() == lname.length())
    {
        for(int i=0;i<fname.length();i++)
        {
            if(fname[i]!=lname[i])
            {
                flag = false;
            }
        }
    }

    if(flag)
    {
        cout<<"same"<<endl;
    }
    else{
        cout<<"different"<<endl;
    }
}