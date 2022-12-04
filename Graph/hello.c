#include<stdio.h>
#include<stdlib.h>
struct node
{
    int val;
    struct node *nxt;
}*n1,*n2,*h,*n3;
int nw,ne,q=0,w=0;
void insert(int src,int dest)
{
    n1=(struct node*)malloc(sizeof(struct node));
    n2=(struct node*)malloc(sizeof(struct node));
    n1->val=dest;
    n2->val=src;
    if(h[dest].nxt==NULL)
    h[dest].nxt=n2;
    else
    {
        n3=h[dest].nxt;
        while(n3->nxt!=NULL)
        n3=n3->nxt;
        n3->nxt=n2;
    }
    if(h[src].nxt==NULL)
    h[src].nxt=n1;
    else
    {
        n3=h[src].nxt;
        while(n3->nxt!=NULL)
        n3=n3->nxt;
        n3->nxt=n1;
    }
}
void printalist()
{
    for(int i=0;i<nw;i++)
    {
        printf("Adjacency list of vertex %d\nhead ",i);
        n3=h[i].nxt;
        while(n3!=NULL)
        {
            printf("-> %d",n3->val);
            n3=n3->nxt;
        }
        printf("\n");
    }
}
int main()
{
    scanf("%d %d",&nw,&ne);
    int src,dest;
    h=(struct node *)malloc(nw*sizeof(struct node));
    for(int i=0;i<ne;i++)
    {
        scanf("%d %d",&src,&dest);
        insert(src,dest);
    }
    printalist();
}
