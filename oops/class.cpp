// Class -> A class is a blueprint or template userd to create objects. 
// object : An object is a instance of a class .


#include<iostream>
using namespace std;

class demo
{
    private:

    int a;
    int b;

    public:

    void test(){
        cout<<"Test function called..."<<endl;
    }


};

int main()
{
    demo s;
    s.test();
    
}


// accessmodifier
// 1. public:
// 2. private :
// 3. protected :