#include<stdio.h>
#define STACK_SIZE  5
int st[10],top,item;
top==-1;
void push()
{
      if (top==STACK_SIZE)
        printf("stock overload\n");
      else
     {
      top++;
      st[top] = item;
     }
}
int pop()
int del_item;
if(top==-1)
printf("Stack underflow");
else
{
    del item = st[top];
    top--;
    return del_item;
   }
}
void display()
{
    if(top==-1)
    printf("stack is empty\n");
    for(i=0;i<=top;i++)
    printf("%d\t",st[i]);
}
void main()
{
 int x;
While(choice)
printf("enter the choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1;
   printf("enter items") 
   scanf("%d",&item);
   push();
   break;
case2;
   x=pop();
   printf("%d",x);
break;
case 3;
display();
  break;
  default: exit(0);
  }
}      
  
