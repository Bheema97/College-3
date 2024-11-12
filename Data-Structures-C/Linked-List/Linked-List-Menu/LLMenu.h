#ifndef LLMENU_H_INCLUDED
#define LLMENU_H_INCLUDED

struct node *createllbeg();
struct node *createllend();
void displaysll(struct node *start);
struct node *insertllbeg(struct node *start, int item);
struct node *insertllend(struct node *start, int item);
struct node *insertllaft(struct node * start,int elem, int item);
struct node *insertllbef(struct node * start,int elem, int item);
struct node*deletellbeg(struct node* start);
struct node*deletellend(struct node* start);
struct node * deletellnode(struct node* start,int elem);

struct node
{
    int info;
    struct node *next;
};

#endif // LLMENU_H_INCLUDED
