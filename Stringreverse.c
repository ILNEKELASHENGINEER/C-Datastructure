#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 100
int Top;
char stack[size];
void push(char a);
void pop();
int main()
{
   Top=-1;
   char str[size];
   printf("Enter the string ");
   scanf("%[^\n]s",str);
   for(int i=0;i<=strlen(str);i++)
   {
      push(str[i]);
   }
   printf("REversed string is -> ");
   for(int i=0;i<=strlen(str);i++)
   {
    pop();
   }
   return 0;
}
void push(char a)
{
    if(Top>=size-1)
    {
        printf("stack overflow");
    }
    else{
        stack[++Top]=a;
    }

}
void pop()
{
    
        printf("%c",stack[Top--]);
}