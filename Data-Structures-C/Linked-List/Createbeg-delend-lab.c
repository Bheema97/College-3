#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
};

struct node *createllbeg()
{
    struct node *start=NULL,*p;
    int item;
    printf("Enter elements (to stop -999)\n");
    scanf("%d",&item);
    while(item!=999)
    {
        p=(struct node *)malloc(sizeof(struct node));
        p->info=item;
        if(start==NULL)
        {
            p->next=NULL;
            start=p;
            printf("First node created\n");
        }
        else
        {
            p->next=start;
            start=p;
            printf("Node created\n");
        }
        scanf("%d",&item);
    }
    return start;
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
    else //ERROR : Crashing if more than 1 element. Check else condition
    {
        temp=start;
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

void displaysll(struct node *start)
{
    struct node *temp;
    if(start==NULL)
        printf("Linked list is empty\n");
    else
    {
        temp=start;
        printf("The elements are :");
        while(temp!=NULL)
        {
            printf("|%d| ----->",temp->info);
            temp=temp->next;
        }
        printf("\n");
    }
}
struct node *start=NULL;

int main()
{
    start=createllbeg();
    start=deletellend(start);
    displaysll(start);
    return 0;
}
