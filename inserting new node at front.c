#include<stdio.h>
#include<stdlib.h>
//#include<conio.h> for offline compiler mostly unused library 
struct node {
    int data;
    struct node *next;
};
int n;
struct node *newnode, *head, *current, *temp;
void printlist(struct node* n){
    while (n!=NULL){
        printf("%d ",n->data);
        n=n->next;
    }
}
int main(){
    int a;
    //printf("Hello"); for testing purpose
    temp = head;
    head =0;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        newnode = (struct node*)malloc(sizeof(struct node));
        scanf("%d",&(newnode->data));
        //printf("%d",(newnode->data));
        if(head==NULL){
            head = newnode;
            current=newnode;
        }
        else{
            current->next=newnode;
            current=newnode;
        }
        newnode->next=NULL;
    }
    scanf("%d",&a);
    struct node *newnode1;
    newnode1->data=a;
    newnode1->next=head;
    head=newnode1;
    printlist(head);
}

/*
input
5  (no.of.node need to be create)
1 2 3 4 5 (nodes)
6  (node need to be insert at front)
output
6 1 2 3 4 5
*/
