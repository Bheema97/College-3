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
    void show(Lamborghini l1);
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
    friend void RollsRoyce::show(Lamborghini l1);
};

void RollsRoyce::show(Lamborghini l1)
{
    cout<<"Worked"<<price;
}

int main()
{
    RollsRoyce r1;
    Lamborghini l1;
    r1.read();
    l1.read();
    r1.print();
    l1.print();
    r1.show(l1);
    return 0;
}

