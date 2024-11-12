#include<iostream>
using namespace std;

class Lamborghini;
class RollsRoyce;

class RollsRoyce
{
private:
    char model[50];
    int year;
    float price,mile;
public:
    void read()
    {
        cout<<"Enter car model name - ";
        cin>>model;
        cout<<"Enter year of making - ";
        cin>>year;
        cout<<"Enter price - ";
        cin>>price;
        cout<<"Enter mileage - ";
        cin>>mile;
    }
    void print()
    {
        cout<<endl<<model<<" made in the year "<<year<<endl;
        cout<<"Costs "<<price<<" rupees and gives "<<mile<<" km/l"<<endl<<endl;
    }
    friend void compare(RollsRoyce r1,Lamborghini l1);
};


class Lamborghini
{
private:
    char model[50];
    int year;
    float price,mile;
public:
    void read()
    {
        cout<<"Enter car model name - ";
        cin>>model;
        cout<<"Enter year of making - ";
        cin>>year;
        cout<<"Enter price - ";
        cin>>price;
        cout<<"Enter mileage - ";
        cin>>mile;
    }
    void print()
    {
        cout<<model<<" made in the year "<<year<<endl;
        cout<<"Costs "<<price<<"rupees and gives "<<mile<<" km/l"<<endl;
    }
    friend void compare(RollsRoyce r1,Lamborghini l1);
};

void compare(RollsRoyce r1,Lamborghini l1)
{
    (r1.price>l1.price)?cout<<"RollsRoyce is more expensive"<<endl:cout<<"Lamborghini is more epxensive"<<endl;
    (r1.mile>l1.mile)?cout<<"RollsRoyce gives more mileage"<<endl:cout<<"Laborghini gives more mileage"<<endl;
}

int main()
{
    RollsRoyce r1;
    Lamborghini l1;
    r1.read();
    l1.read();
    r1.print();
    l1.print();
    compare(r1,l1);
    return 0;
}
