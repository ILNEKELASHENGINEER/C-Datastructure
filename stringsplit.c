#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[500],str2[500];
    gets(str);
    strcpy(str2,str);
    char *token = strtok(str," , ");
    printf("Queue 1:\n");
    while(token!=NULL){
        char man[50];
        strcpy(man,token);
        int l = strlen(man);
        if(man[0]=='s'||man[0]=='S' && man[l-1]=='a'){
        // if(*token=='s')
        printf("%s \n",man);}
        token = strtok(NULL,",");
    }
    return 0;
}
/*
INPUT
Samaya,Saranya,surya,neke,hello,Sampa
OUTPUT
Queue 1:
Samaya
Saranya
surya
Sampa
*/
