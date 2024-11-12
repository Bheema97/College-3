#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
};

struct node *insertllbeg(struct node *start, int item)
{
    struct node* p;
    p=(struct node *)malloc(sizeof(struct node));
    p->info=item;
    if(start==NULL)
    {
        p->next=NULL;
        start=p;
    }
    else
    {
        p->next=start;
        start=p;
    }
    return start;
};

int main()
{

}
