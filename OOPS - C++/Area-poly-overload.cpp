#include<iostream>
using namespace std;
void area(float r)
{
float circle=3.14*r*r;
cout<<"The Area of Circle is  : "<<circle<<endl;
}
void area(int l,int b)
{
int rectangle=l*b;
cout<<"The Area of Rectangle is : "<<rectangle<<endl;
}
void area(float ba,float h)
{
int triangle=(ba*h)/2;
cout<<"Area of Triangle is : "<<triangle<<endl;
}
int main()
{
int l,b;
float ba,h,r;
cout<<"Function overloading"<<endl;
cout<<"Enter Length and Breadth for Rectangle"<<endl;
cin>>l>>b;
cout<<endl;
cout<<"Enter Floating values for Traingle[Base and Height]"<<endl;
cin>>ba>>h;
cout<<endl;
cout<<"Enter Radius of Circle"<<endl;
cin>>r;
cout<<endl;
area(r);
area(ba,h);
area(l,b);
return 0;
}
