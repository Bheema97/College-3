#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
};


void displaysll(struct node *start)
{
    struct node *temp;
    if(start==NULL)
        printf("Linked list is empty\n");
    else
    {
        temp=start;
        printf("The elements are \n");
        while(temp!=NULL)
        {
            printf("%d\n",temp);
            temp=temp->next;
        }
    }
}

int main()
{

}
