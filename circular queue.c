#include<stdio.h>
#include<stdlib.h>
#define qsize 5
int count=0;
void insert_rear(int q[],int item,int*r)
{
    if (count==qsize)
    printf("queue overflow\n");
    else
    {
        (*r)++;
        (*r)=(*r)%qsize;
        q[*r]=item;
        count++;
    }
}
void delete_front (int q[],int*f,int*r)
{
    int del_item;
    if (count==0)
    {
        printf("queue underflow");
    }
    else
    {
        del_item=q[*f];
        *f=((*f)++)%qsize;
        count--;
        printf("item being deleted is %d\n",del_item);
    }
}
void display(int q[],int * f)
{
    int i,temp;
    temp=*f;
    for(i=0;i<count;i++)
    {
        printf("%d\n",q[temp]);
        temp=(temp+1)%qsize;
    }
}
void main()
{
    int r=-1;
    int f=0;
    int item,q[qsize];
    int n,i;
    while(1)
{
    printf("\nchoose from the following\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
    scanf("%d",&n);
    
    switch(n)
    {
        case 1:printf("enter the item to be inserted\n");
            scanf("%d",&item);
            insert_rear(q,item,&r);
             break;
        case 2:delete_front(q,&f,&r);
             break;
        case 3:display(q,&f);
             break;
        case 4:exit(0);
        default:printf("enter correct option number\n");
             break;
    }
    }

}