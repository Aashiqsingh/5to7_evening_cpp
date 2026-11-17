#include<iostream>
using namespace std;


class Test{
    
    int roll;
    string name;
    int age;
    float marks;

    public:
    void setDetails()
    {
        cout<<"Enter roll :";
        cin>>roll;
        cin.ignore();
        cout<<"Enter Name :";
        getline(cin,name);
        cout<<"Enter age :";
        cin>>age;
        cout<<"Enter marks :";
        cin>>marks;
    }

    void getDetails()
    {
        cout<<"Roll :"<<roll<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
        cout<<"Marks :"<<marks<<endl;
    }


};



int main()
{

    Test t1,t2,t3;
    t1.setDetails();
    t1.getDetails();
    // t2.setDetails();

}

