#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
};

struct node *insertllend(struct node *start, int item)
{
    struct node* p,*temp;
    p=(struct node *)malloc(sizeof(struct node));
    p->info=item;
    if(start==NULL)
    {
        p->next=NULL;
        start=p;
    }
    else
    {
        temp=start;
        while(temp->next!=NULL)
            temp=temp->next;
        p->next=NULL;
        temp->next=NULL;
    }
    return start;
};

int main()
{

}

