#include<stdio.h>

char a[100];
int maxsize=20;
 int top=-1;
 int flag=0;

 void push(char item)
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

 char pop()
 {
     char item;
     if(top==-1)
     {
         return -1;
     }
     else
     {
         item=a[top];
         top=top-1;
         return item;
     }
 }

/* void display()
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
             printf("|%c|\n",a[i]);
         }
     }
 }*/


 int main()
 {
     char poly[30];
     char postf[30];
     printf("Enter polynomial - ");
     gets(poly);
     int i=0;
     int j=0;
     while(poly[i]!='\0' && i<30)
     {
         if(poly[i]=='(')
         {
             push(poly[i]);
         }
         else if(poly[i]>=48 && poly[i]<=57)
         {
             postf[j]=poly[i];
             j++;
         }
         else if(poly[i]==')')
         {
             while(a[top]!='(')
             {
                 postf[j]=pop();
                 j++;
             }
             pop();
         }
         else if(poly[i]=='+' || poly[i]=='-' || poly[i]=='/' || poly[i]=='*')
         {
             if(poly[i]=='+' || poly[i]=='-')
             {
                 while (a[top]!='(' && a[top]!='\0')
                 {
                     postf[j]=pop();
                     j++;
                 }
                 push(poly[i]);
             }
             else
             {
                 while (a[top]!='-' && a[top]!='+' && a[top]!='(' && a[top]!='\0' )
                 {
                     postf[j]=pop();
                     j++;
                 }
                 push(poly[i]);
             }

         }
         else
         {
             exit(0);
         }
         i++;
     }
     postf[j]=pop();
     //printf("%s",postf);
     puts(postf);
     return 0;

 }
