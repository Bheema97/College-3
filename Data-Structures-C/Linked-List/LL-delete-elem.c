#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
};

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

int main()
{

}
