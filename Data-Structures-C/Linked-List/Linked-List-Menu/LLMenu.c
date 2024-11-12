#include "LLMenu.h"
#include<stdio.h>
#include<stdlib.h>
//InsertAtEnd and DeleteEnd functions need to be rectified. Unknown errors


//Creates linked list by inserting elements at the beginning
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


//Creates linked list by inserting elements at the ending
struct node *createllend()
{
    struct node *start=NULL,*last,*p;
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
            last=p;
            printf("First node created\n");
        }
        else
        {
            p->next=NULL;
            last->next=p;
            last=p;
            printf("Node created\n");
        }
        scanf("%d",&item);
    }
    return start;
};

//Displays elements of the list
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

//Inserts an element at the beginning of the linked list
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

//Inserts an element at the end of the linked list
struct node *insertllend(struct node *start, int item)    //ERROR : Element not being inserted
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
        temp->next=p;
    }
    return start;
};

//Inserts an element after a given element in a linked list
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
        while(temp!=NULL && temp->info!=elem)
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

//Inserts an element before a given element in a linked list
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

//Deletes an element from the beginning of the linked list
struct node*deletellbeg(struct node* start)
{
    struct node* temp;
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
        printf("The deleted node is - %d\n",start->info);
        temp=start;
        start=start->next;
        free(temp);
    }
    return start;
};

//Deletes an element from the ending of the linked list
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

//Deletes given element from linked list, if present
struct node * deletellnode(struct node* start,int elem)
{
    struct node *temp,*follow;
    if(start==NULL)
    {
        printf("Linked List is empty\n");
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
            printf("Element not in linked list\n");
        }
        else
        {
            if(temp==start)
            {
                printf("The node to be deleted is %d\n",temp->info);
                start=start->next;
                free(temp);
            }
            else
            {
                printf("The node to be deleted is %d\n",temp->info);
                follow->next=temp->next;
                free(temp);
            }
        }
    }
    return start;
};
