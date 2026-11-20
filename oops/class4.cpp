#include<iostream>
using namespace std;


class Bank{
    int bal,age;
    string name;

    public:

    void new_acc()
    {
        cin.ignore();
        cout<<"Enter your name :";
        getline(cin,name);
        // cin.ignore();
        cout<<"Enter balance :";
        cin>>bal;
        cout<<"Enter your age :";
        cin>>age;
    }

    int get_balance()
    {
        return bal;
    }

    void withdraw(int amount)
    {
        if(amount < bal)
        {
            bal -= amount;
            cout<<"Withdraw successfully...";
        }
        else{
            cout<<"Insufficient bal..";
        }
    }

    void deposit(int amount)
    {
        cout<<"Deposited successfully...";
        bal += amount;
    }
};


int main()
{
    Bank b1;

    int choice;

    while(choice!=5)
    {
        cout<<"1 - Create Account\n2 - Deposit\n3 - Withdraw\n4 - Get Balance\n5 - Exit\nEnter choice :";
        cin>>choice;

        switch(choice)
        {
            int amount;
            case 1: b1.new_acc();
                    break;
            case 2: cout<<"Enter Amount for deposit :";
                    cin>>amount;
                    b1.deposit(amount);
                    break;
            case 3: cout<<"Enter amount for Withdraw :";
                    cin>>amount;
                    b1.withdraw(amount);
                    break;
            case 4: cout<<"Avlbal = "<<b1.get_balance();
                    break;

        }
    }
    
}