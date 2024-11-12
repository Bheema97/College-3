#include<iostream>
using namespace std;

class Complex
{
private:
    int re,im;
public:
    void read();
    void display();
    Complex add(int a);
    Complex add(Complex c1);
    friend Complex add(Complex c1,Complex c2);
};

Complex Complex::add(int a)
{
    re+=a;
}

Complex Complex::add(Complex c1)
{
    Complex res;
    res.re=re+c1.re;
    res.im=im+c1.im;
    return res;
}

Complex add(Complex c1,Complex c2)
{
    Complex res;
    res.re=c1.re+c2.re;
    res.im=c1.im+c2.im;
    return res;
}

void Complex::read()
{
    cout<<"Enter real part - ";
    cin>>re;
    cout<<"Enter imaginary part - ";
    cin>>im;
}

void Complex::display()
{
    cout<<re<<" + "<<im<<"i"<<endl;
}

int main()
{
    Complex c1,c2,c3,c4;
    c1.read();
    c1.display();
    c2.read();
    c2.display();
    cout<<"Adding 2 to c2  - ";
    c2.add(2);
    c2.display();
    c3=c1.add(c2);
    cout<<"Sum of c1 and c2 = ";
    c3.display();
    c4=add(c1,c2);
    return 0;
}
