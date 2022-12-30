Skip to content
Product
Solutions
Open Source
Pricing
Search
Sign in
Sign up
MANOJPATIL987
/
1BM21CS104-DST
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
1BM21CS104-DST/linked list
@MANOJPATIL987
MANOJPATIL987 Create linked list
Latest commit c6823b6 2 weeks ago
 History
 1 contributor
123 lines (104 sloc)  2.17 KB

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

struct node *first = NULL;

void display()
{
    struct node *temp;

    if (first == NULL)
        printf("\nLinked List is empty\n");

    else
    {
        temp = first;
        while (temp != NULL)
        {
            printf("Element = %d\n", temp->value);
            temp = temp->next;
        }
    }
}

void insert_at_Front()
{
    int data;
    struct node *temp;
    temp = malloc(sizeof(struct node));
    printf("\nEnter number to be inserted : ");
    scanf("%d", &data);
    temp->value = data;

    temp->next = first;
    first = temp;
}

void insert_at_End()
{
    int data;
    struct node *temp, *last;
    temp = malloc(sizeof(struct node));

    printf("\nEnter number to be inserted : ");
    scanf("%d", &data);

    temp->next = 0;
    temp->value = data;
    last = first;
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = temp;
}

void insert_at_any_Position()
{
    struct node *temp, *newnode;
    int pos, data, i = 1;
    newnode = malloc(sizeof(struct node));

    printf("\nEnter position and data :");
    scanf("%d %d", &pos, &data);

    temp = first;
    newnode->value = data;
    newnode->next = 0;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

int main()
{
    while (1)
    {
        int choice;
        printf("1. Insert At First Position");
        printf("\n2. Insert At Last Position");
        printf("\n3. Insert At Any Position");
        printf("\n4. Display Elements");
        printf("\n5. to Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert_at_Front();
            break;

        case 2:
            insert_at_End();
            break;

        case 3:
            insert_at_any_Position();
            break;

        case 4:
            display();
            break;
        case 5:
            exit(0);
            break;

        default:
            printf("\nInvalid choice!!! \n");
            break;
        }
    }
    return 0;
}
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
1BM21CS104-DST/linked list at main · MANOJPATIL987/1BM21CS104-DST · GitHub