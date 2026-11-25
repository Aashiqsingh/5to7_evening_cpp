// Constructor : it is speacial type of member of class that call automatically at the time 
// of object creation.

// 1. constructor name is must be same class
// 2. no return type even not void

#include<iostream>
using namespace std;

class Demo{


    public:
    int a;

    Demo()
    {
        a = 100;
        cout<<"calling Demo..";
    }

};


int main()
{
    Demo d;
    cout<<d.a;



    Demo Demo;

}
// There are three typ