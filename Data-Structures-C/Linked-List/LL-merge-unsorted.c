#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
};

struct node *mergesllunsort(struct node *start1,struct node *start2,struct node *start)
{
    struct node *temp;
    temp=start1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=start2;
};

int main()
{

}
