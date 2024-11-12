#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
};

struct node *insertllaft(struct node * start,int elem, int item)
{
    struct node *temp,*p;
    if(start==NULL)
    {
        printf("Empty list. Insertion not possible\n");
    }
    else
    {
        temp=start;
        while(temp==NULL && temp->info!=elem)
        {
            temp=temp->next;
        }
        if(temp==NULL)
        {
            printf("Element not found\n");
        }
        else
        {
            p=(struct node *)malloc(sizeof(struct node));
            p->info=item;
            p->next=temp->next;
            temp->next=p;
        }
    }
    return start;
};

int main()
{

}
