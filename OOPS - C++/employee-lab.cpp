#include<iostream>
#include<string.h>
using namespace std;

class Employee
{

private:
    int empno;
    string name;
    float basic,da,it,grsal,netsal;
public:
    void getInfo()
    {
        cout<<"Enter employee id - ";
        cin>>empno;
        cout<<"Enter name - ";
        cin>>name;
        cout<<"Enter basic salary - ";
        cin>>basic;

    }
    void getNetSal()
    {
        da=0.52*basic;
        grsal=da+basic;
        it=0.30*grsal;
        netsal=basic+da-it;
    }
    void display()
    {
        cout<<"Employee ID - "<<empno<<endl;
        cout<<"Name - "<<name<<endl;
        cout<<"Basic salary - "<<basic<<endl;
        cout<<"Gross salary - "<<grsal<<endl;
        cout<<"Income Tax - "<<it<<endl;
        cout<<"Net Salary - "<<netsal<<endl;
    }
};

int main()
{
    Employee emp[50];
    int n;
    cout<<"Enter number of employees - ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        emp[i].getInfo();
        emp[i].getNetSal();
    }
    cout<<endl<<"Employees List :----  "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<".";
        emp[i].display();
        cout<<endl;
    }
    return 0;
}
