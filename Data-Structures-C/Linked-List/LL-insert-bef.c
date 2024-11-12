#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
};

struct node *insertllbef(struct node * start,int elem, int item)
{
    struct node *temp,*p,*follow;
    if(start==NULL)
    {
        printf("Empty list. Insertion not possible\n");
    }
    else
    {
        temp=start;
        while(temp!=NULL && temp->info!=elem)
        {
            follow=temp;
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
            if(start->info==elem)
            {
                p->next=start;
                start=p;
            }
            else
            {
                p->next=temp;
                follow->next=p;
            }
        }
    }
    return start;
};

int main()
{

}

