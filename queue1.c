#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 100
int arr[size];
int front=-1,rear=-1;
void enque(char z);
void deque();
int main()
{
    int a,b,c;
    printf("Enter the number of elements to enque and deque ");
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&b);
        enque(b);
    }
    printf("The dequed elements are");
    for(int i=0;i<a;i++)
    {
        deque();
    }
}
void enque(char a)
{
    if(rear==size-1)
    {
        printf("Queue is overflow");
    }
    else{
        if(front==-1){front=0;}
            // scanf("%d",)
            rear=rear+1;
            arr[rear]=a;
            // printf("%d",front);
    }
}
void deque()
{
    if(front==-1||front>rear)
    {printf("Queue is underflow");}
    else{
        printf("\n%d",arr[front]);
        front=front+1;
    }
}