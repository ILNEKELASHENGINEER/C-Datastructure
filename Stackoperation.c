#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 100
int top=-1;
int arr[size];
void push(char a);
void pop();
int main()
{
    // int arr[size];
    printf("Enter the number of elements to be insert-> ");
    int n,b;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
       scanf("%d",&b);
        push(b);
    }
    printf("The popped elements is ");
    for(int i=0;i<n;i++)
    {
        pop();
    }
}
void push(char a)
{
    if(top==size-1)
    {
        printf("Stack overflow");
    }
    else
    {
        top=top+1;
        arr[top]=a;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("The stack is empty");
    }
    else{
        printf("%d ",arr[top]);
        top--;
    }
}



/*
INPUT
Enter the number of elements to be insert-> 5
1
2
3
4
5
OUTPUT
The popped elements is 5 4 3 2 1
*/
