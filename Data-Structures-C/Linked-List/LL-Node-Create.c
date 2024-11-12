#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
int main()
{
    struct node *p,*q;
    p=(struct node *)malloc(sizeof(struct node));
    p->info=10;
    q=(struct node *)malloc(sizeof(struct node));
    q->info=20;
    p->next=q;
    q->next=NULL;
    printf("Success");
    return 0;
}
