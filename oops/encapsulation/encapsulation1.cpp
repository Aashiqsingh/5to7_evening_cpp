#include<iostream>
using namespace std;


class Car{
    int speed;
    string fuelType;
    int seat;

    public:

    void setDetail()
    {
        cout<<"Enter speed";
        cin>>speed;
        cin.ignore(); // fflush
        cout<<"Enter fuelType :";
        getline(cin,fuelType);
        cout<<"Enter seat :";
        cin>>seat;
    }

    void display()
    {
        cout<<"Speed = "<<speed<<endl;
        cout<<"Type = "<<fuelType<<endl;
        cout<<"Seat = "<<seat<<endl;
    }

};


int main()
{
    Car c1,c2;

    c1.speed = 100;

    // c1.setDetail();
    // c2.setDetail();
    // // c1.display();
    // c2.display();
}