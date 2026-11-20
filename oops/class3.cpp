#include<iostream>
using namespace std;


class Calculator{
    private:
    int a,b;


    public:

    void scanData()
    {
        cout<<"Enter first number :";
        cin>>a;
        cout<<"Enter second number :";
        cin>>b;
    }

    void add()
    {
        cout<<"Addition = "<<a+b<<endl;
    }

    void sub(int x,int y)
    {
        a = x;
        b = y;

        cout<<"Subtraction ="<<a-b<<endl;
    }

    void mul()
    {
        cout<<"multiplication = "<<a*b<<endl;
    }

    void div(int x)
    {
        a = x;
        cout<<"Division = "<<a/b<<endl;
    }

};


int main()
{
    Calculator c1;
    
    c1.scanData();
    cout<<"1 - Add\n2 - Sub\n3 - Mul\n4 - Div\nEnter your choice :"<<endl;
    int choice;
    cin>>choice;

    switch(choice)
    {
        case 1: c1.add();
                break;
        case 2: c1.sub(50,20);
                break;
        case 3: c1.mul();
                break;
        case 4: c1.div(40);
                break;
    }
}