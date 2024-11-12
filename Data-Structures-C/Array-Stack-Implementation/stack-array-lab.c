#include<stdio.h>

int a[100];
int maxsize=20;
 int top=-1;
 int flag=0;

 void push(int item)
 {
     if(top==maxsize-1)
     {
         while(flag==0)
         {
             printf("Stack is full\n");
             flag=1;
         }
     }
     else
     {
         top+=1;
         a[top]=item;
     }
 }

 int pop()
 {
     int item;
     if(top==-1)
     {
         printf("Stack is empty\n");
         return -1;
     }
     else
     {
         item=a[top];
         top=top-1;
         return item;
     }
 }

 void display()
 {
     int i;
     if(top==-1)
     {
         printf("Stack is empty\n");
     }
     else
     {
         printf("The elements of the stack are \n");
         for(i=top;i>=0;i--)
         {
             printf("|%d|\n",a[i]);
         }
     }
 }

 int main()
 {
     int x,n;
     printf("Enter max size of stack (less than 10) - ");
     scanf("%d",&maxsize);
     printf("Enter number of elements - ");
     scanf("%d",&n);
     for (int i=0;i<n;i++)
     {
         if(flag==0)
         {
             printf("Enter element - ");
             scanf("%d",&x);
             push(x);
             printf("Element pushed\n");
         }
     }
     display();
     pop();
     printf("After popping :---\n");
     display();
     return 0;
 }
