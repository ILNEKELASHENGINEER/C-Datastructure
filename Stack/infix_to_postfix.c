#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define size 100
char stack[size];
int top=-1;
void push(char x){
    if(top==size-1){
        printf("Stack is empty");
    }
    else{
      stack[++top]=x;  
    }
}
char pop(){
    if(top==-1){
        printf("Stack is empty");
    }
    else{
        return stack[top--];
    }
}
int expcheck(char x){               // OPERATOR PRECEDENCE
    if(x=='('){                 // ( OR ) 1
        return 0;              
    }
     if(x=='^'){                // ^ 4
         return 3;
     }
    if(x=='+'||x=='-'/*||x=='^'*/){
        return 1;             // + or - 2
    }
    if(x=='*'||x=='/'){
        return 2;            // * OR /  3
    }
    return 0;
}
int main(){
    char exp[150];
    char *e,x;
    scanf("%s",exp);
    // printf("\n");
    e = exp;
    while(*e!='\0'){
        if(isalnum(*e)){
            printf("%c",*e);
        }
        else if(*e=='(')
        {push(*e);
        }
        else if(*e==')'){
            while((x=pop())!='(')
                printf("%c",x);
        }
        else
        {
            while(expcheck(stack[top])>=expcheck(*e))
                printf("%c",pop());
            push(*e);
            
        }
        e++;
    }
    while(top != -1){
        printf("%c",pop());
    }
    return 0;
}

/*
INPUT
a+b*c
OUTPUT
abc*+ 

INPUT (with bitwise operator)
(a+b)*(c^d+e)^(f+g)*h
OUTPUT
ab+cd^e+fg+^*h*
*/
