#include<iostream>
using namespace std;

void call(int a, int *b, int &c)
{
    cout<<endl<<endl;
    a+=10;
    *b+=10;
    c+=10;
    cout<<"Value in x in-call - "<<a<<endl;
    cout<<"Value in y in-call - "<<*b<<endl;
    cout<<"Value in z in-call - "<<c<<endl;
}

int main()
{
    int x=5;
    int y=5;
    int z=5;
    cout<<"Value in x precall - "<<x<<endl;
    cout<<"Value in y precall - "<<y<<endl;
    cout<<"Value in z precall - "<<z<<endl;
    call(x,&y,z);
    cout<<endl<<endl;
    cout<<"Value in x postcall - "<<x<<endl;
    cout<<"Value in y postcall - "<<y<<endl;
    cout<<"Value in z postcall - "<<z<<endl;
    return 0;
}
