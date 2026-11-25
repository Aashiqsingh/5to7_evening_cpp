#include<iostream>

using namespace std;


class Area{

    public:
    int length;
    int width;

    void getAreaofSquare(Area a)
    {
        cout<<"Area of square = "<<a.length * a.length<<endl;
    }

    void getAreaofRectangle(Area a);
};

void Area::getAreaofRectangle(Area a)
{
    cout<<"Area of rectangle = "<<a.length * a.width<<endl;
}


int main()
{
    Area a1;
    a1.length = 12;
    a1.width = 13;

    // a1.getAreaofSquare(a1);
    // a1.getAreaofRectangle(a1);


    Area a2;

    a2.getAreaofSquare(a1);
}