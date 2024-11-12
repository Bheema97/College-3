#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
};

struct node*deletellend(struct node* start)
{
    struct node* temp,*follow;
    if(start==NULL)
    {
        printf("LL is empty, Nothing to be deleted\n");
    }
    else if(start->next==NULL)
    {
        printf("The deleted node is - %d\n",start->info);
        free(start);
        start=NULL;
    }
    else
    {
        while(temp->next!=NULL)
        {
            follow=temp;
            temp=temp->next;
        }
        printf("The deleted node is - %d\n",temp->info);
        follow->next=NULL;
        free(temp);
    }
    return start;
};

int main()
{

}


