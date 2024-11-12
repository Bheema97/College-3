#include<iostream>
using namespace std;

class Circle
{
private:
    double radius;
    double area;
    double circumference;
public:
    void setRadius(double r)
    {
        radius=r;
    }
    double getArea()
    {
        area=3.14*radius*radius;
        return area;
    }
    double getCircum()
    {
        circumference=2*3.14*radius;
        return circumference;
    }
    void display()
    {
        cout<<"The radius is - "<<radius<<endl;
    }
};

int main()
{
    int n;
    cout<<"Enter number of circles - ";
    cin>>n;
    cout<<endl<<endl;
    Circle circ[n];
    float rad;
    for (int i=0;i<n;i++)
    {
        cout<<"Enter radius for circle "<<i+1<<"- ";
        cin>>rad;
        circ[i].setRadius(rad);
        circ[i].display();
        cout<<"The area for circle "<<i+1<<"is - "<<circ[i].getArea()<<endl;
         cout<<"The circumference for circle "<<i+1<<"is - "<<circ[i].getCircum()<<endl;
         cout<<endl<<endl;
    }
    return 0;
}
