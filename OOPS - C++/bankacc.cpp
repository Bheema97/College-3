#include<iostream>
using namespace std;

class bankAcc
{
private:
    char name [50];
    int accno;
    char acctype[50];
    float accamt;
public:
    void setVal()
    {
        cout<<"Enter name - ";
        cin>>name;
        cout<<"Enter account number - ";
        cin>>accno;
        cout<<"Enter account type - ";
        cin>>acctype;
        cout<<"Enter amount balance - ";
        cin>>accamt;
    }
    void deposit()
    {
        int amt;
        cout<<"Enter amount to deposit - ";
        cin>>amt;
        accamt+=amt;
        cout<<"Amount after depositing - "<<accamt<<endl;
    }
    void withdraw()
    {
        int amt;
        cout<<"Enter amount to withdraw - ";
        cin>>amt;
        accamt-=amt;
        cout<<"Amount after wihtdrawing - "<<accamt;
    }
    void display()
    {
        cout<<"Account owner - "<<name;
        cout<<"Amount in account - "<<accamt;
    }
};

int main()
{
    bankAcc acc1;
    acc1.setVal();
    acc1.display();
    acc1.deposit();
    acc1.withdraw();
    return 0;
}
