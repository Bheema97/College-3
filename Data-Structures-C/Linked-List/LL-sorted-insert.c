#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
};

struct node * insertllsort(struct node *start,int item)
{
    struct node *temp,*p,*follow;
    p=(struct node *)malloc(sizeof(struct node));
    p->info=item;
    if(start==NULL)
    {
        p->next=NULL;
        start=p;
    }
    else if(item<start->info)
    {
        p->next=start;
        start=p;
    }
    else
    {
        temp=start;
        while(temp!=NULL && item>temp->info)
        {
            follow=temp;
            temp=temp->next;
        }
        p->next=temp;
        follow->next=p;
    }
    return start;
};

int main()
{

}
