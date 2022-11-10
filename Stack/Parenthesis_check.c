#include<stdio.h>
#include<stdlib.h>
#define size 50
char stack[size];
int top = -1;
char push(char x){
    if(top==size-1){
        printf("Stack overflow");
    }
    else{
        stack[++top]=x;
    }
}
char pop(){
    if(top==-1){
        printf("Stack underflow");
    }
    else{
        top--;
    }
}
int main(){
    char exp[50];
    char *e,x;
    scanf("%s",exp);
    e=exp;
    while(*e!='\0'){
        if(*e=='('||*e=='{'||*e=='[')
           { push(*e);
            // printf("Hei");
            }
        else if(*e==')'||*e=='}'||*e==']')
            pop(*e);
        e++;
    }
//   printf("%d",pop());
    // else
    // printf("False");
    if(top==-1){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}

/*
INPUT
{{([])}}
OUTPUT
True

INPUT
{(}]
OUTPUT
False
*/
