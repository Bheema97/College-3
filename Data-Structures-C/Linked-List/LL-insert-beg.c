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
    printf("Enter elements (to stop 999)");
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

int main()
{

}

