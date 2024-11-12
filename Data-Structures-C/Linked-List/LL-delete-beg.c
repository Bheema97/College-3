#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
};

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

int main()
{

}

