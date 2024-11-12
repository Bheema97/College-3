#include<iostream>
using namespace std;

class Student
{
private:
    int rno;
    float marks[6][3];
    float avg[6];
public:
    void getMarks()
    {
        cout<<"Enter marks - ";
        for(int i=0;i<6;i++)
        {
            for(int j=0;j<3;j++)
            {

                cin>>marks[i][j];
            }
        }
        cout<<endl<<"Marks entered for student"<<endl;
    }
    void getAvg()
    {
        float a,b;
        for(int i=0;i<6;i++)
        {
            if(marks[i][0]>marks[i][1] && marks[i][0]>marks[i][2])
            {
                a=marks[i][0];
                b=(marks[i][1]>marks[i][2])?marks[i][1]:marks[i][2];
                avg[i]=(a+b)/2;
            }
            else if(marks[i][1]>marks[i][2])
            {
                a=marks[i][1];
                b=(marks[i][0]>marks[i][2])?marks[i][0]:marks[i][2];
                avg[i]=(a+b)/2;
            }
            else
            {
                a=marks[i][2];
                b=(marks[i][0]>marks[i][1])?marks[i][0]:marks[i][1];
                avg[i]=(a+b)/2;
            }
        }
    }
    void display()
    {
        cout<<"Marks :--";
        cout<<endl;
        for (int i=0;i<6;i++)
        {
            cout<<"Subject "<<i<<endl;
            for (int j=0;j<3;j++)
            {
                cout<<marks[i][j]<<" ";
            }
            cout<<endl;
            cout<<"Average score - "<<avg[i]<<endl;
            cout<<endl;
        }
    }
};

int main()
{
    Student stud[10];
    int n;
    cout<<"Enter no.of students - ";
    cin>>n;
    for(int k=0;k<n;k++)
    {
        stud[k].getMarks();
        stud[k].getAvg();
    }
    for(int k=0;k<n;k++)
    {
        stud[k].display();
    }
    return 0;
}
