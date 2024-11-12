#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
};
struct node *mergesllsort(struct node* start1,struct node *start2,struct node *start)
{
    struct node *temp1,*temp2,*last;
    start=NULL;
    temp1=start1;
    temp2=start2;
    while(temp1!=NULL && temp2!=NULL)
    {
        if(start==NULL)
        {
            if(temp1->info>temp2->info)
            {
                start=temp1;
                temp1=temp1->next;
                start->next=NULL;
                last=start;
            }
            else
            {
                start=temp2;
                temp2=temp2->next;
                start->next=NULL;
                last=start;
            }
        }
        else if(temp1->info<temp2->info)
        {
            last->next=temp1;
            last=temp1;
            temp1=temp1->next;
            last->next=NULL;
        }
        else
        {
            last->next=temp2;
            last=temp2;
            temp2=temp2->next;
            last->next=NULL;
        }
    }
    while(temp1!=NULL)
    {
        last->next=temp1;         //Alternatively just write last->next=temp1;
        last=temp1;
        temp1=temp1->next;
        last->next=NULL;
    }
    while(temp2!=NULL)
    {
        last->next=temp2;    //can be written as done for temp1!=NULL as well
    }
};

int main()
{

}
