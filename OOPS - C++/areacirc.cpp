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
    Circle circ;
    circ.setRadius(1.5);
    circ.display();
    cout<<"Area of circle is - "<<circ.getArea()<<endl;
    cout<<"Circumference is - "<<circ.getCircum()<<endl;
    return 0;
}
