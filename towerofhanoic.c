#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void towerofhanoi(int n,char from_rod,char to_rod,char aux_rod)
{
    if(n==1)
    {
        printf("\n Move disk 1 from %c to rod %c",from_rod,to_rod);
        return;
    }
    towerofhanoi(n-1,from_rod,aux_rod,to_rod);
    printf("\n Move disk %d form rod %c to rod %c",n,from_rod,to_rod);
    towerofhanoi(n-1,aux_rod,to_rod,from_rod);
}
int main()
{
    int n=4;
    towerofhanoi(n,'A','C','B');
    return 0;
}