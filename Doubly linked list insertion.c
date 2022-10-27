#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev, *next;
}*head, *ptr;

void insertAtEnd(int data)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->prev = NULL;
    newnode->next = NULL;

    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        ptr = head;
        while(ptr->next != NULL)
            ptr=ptr->next;

        ptr->next = newnode;
        newnode->prev = ptr;
        ptr = ptr->next;
    }
}

void insertAtFirst(int data)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;

    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        newnode->next = head;
        newnode->next->prev = newnode;
        head = newnode;
    }
}

void insertAtPos(int data, int pos)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;

    int i=1;
    if(pos < 1)
    {
        printf("Invalid Position");
    }
    else
    {
        ptr = head;
        while(i<pos-1)
        {
            ptr=ptr->next;
            i++;
        }
        newnode->next = ptr->next;
        ptr->next->prev = newnode;


        ptr->next = newnode;
        newnode->prev = ptr;
    }
}

void display()
{
    ptr = head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

int main()
{
    while(1)
    {
        int choice,data,pos;
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            scanf("%d",&data);
            insertAtFirst(data);
            break;

        case 2:
            scanf("%d",&data);
            insertAtEnd(data);
            break;

        case 3:
            scanf("%d",&pos);
            scanf("%d",&data);
            insertAtPos(data,pos);
            printf("Node Inserted\n");
            break;

        case 4:
            display();
            break;

        case 5:
            exit(0);

        default:
            printf("Wrong Choice\n");

        }
    }
}
// choice 1 == insert at left (front) 
//        2 == insert at right (back)
//        3 == insert at given position
//        4 == display the list
//        5 == exit
//        abouve 5 == wrong choice
