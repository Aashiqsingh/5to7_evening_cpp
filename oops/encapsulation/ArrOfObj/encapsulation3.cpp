#include<iostream>

using namespace std;

class Test{

    public:
    int a = 10;

    void getObject(Test t)
    {
        cout<<"fucntion called..."<<endl;

        a = t.a;
        cout<<"\nvalue of a = "<<a<<endl;
    }
};

int main()
{
    Test t1;
    cout<<"value of a = "<<t1.a<<endl;
    t1.a = 2000;
    Test t2;
    cout<<"\nvalue of a = "<<t2.a<<endl;
    t2.a = 3000;

    t1.getObject(t1);

    cout<<"\nvalue of new = "<<t2.a;
}

