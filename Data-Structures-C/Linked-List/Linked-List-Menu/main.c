#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include "LLMenu.h"

struct node *start=NULL;
void main()
{
    int choice,item,elem;
    while(1)
    {
        printf("\n\n\n1.Create Linked Listed (beginning)\n2.Create Linked List (end)\n3.Display elements\n4.Insert at beginning\n5.Insert at end\n");
        printf("6.Insert after element\n7.Insert before element\n8.Delete beginning element\n9.Delete ending element\n10.Delete node\n");
        printf("Enter choice - ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            start=createllbeg();
            break;
        case 2:
            start=createllend();
            break;
        case 3:
            displaysll(start);
            break;
        case 4:
            printf("Enter item to insert - ");
            scanf("%d",&item);
            start=insertllbeg(start,item);
            break;
        case 5:
            printf("Enter item to insert - ");
            scanf("%d",&item);
            start=insertllend(start,item);
            break;
        case 6:
            printf("Enter element to insert after - ");
            scanf("%d",&elem);
            printf("Enter item to insert - ");
            scanf("%d",&item);
            start=insertllaft(start,elem,item);
            break;
        case 7:
            printf("Enter element to insert before - ");
            scanf("%d",&elem);
            printf("Enter item to insert - ");
            scanf("%d",&item);
            start=insertllbef(start,elem,item);
            break;
        case 8:
            start=deletellbeg(start);
            break;
        case 9:
            start=deletellend(start);
            break;
        case 10:
            printf("Enter element to delete - ");
            scanf("%d",&elem);
            start=deletellnode(start,elem);
            break;
        default:
            printf("Loop exited");
            exit(0);
        }
    }
}
