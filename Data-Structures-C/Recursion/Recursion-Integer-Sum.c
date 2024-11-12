#include<stdio.h>

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    return (n+ sum(n-1));
}

int main()
{
    int x;
    x=sum(4);
    printf("%d",x);
    return 0;
}
