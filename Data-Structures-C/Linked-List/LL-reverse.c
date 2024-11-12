#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
};

struct node *reversesll(struct node *start)
{
    struct node *cur=NULL,*temp;
    while(start!=NULL)
    {
        temp=start->next;
        start->next=cur;
        cur=start;
        start=temp;
    }
    return cur;
};

int main()
{

}

