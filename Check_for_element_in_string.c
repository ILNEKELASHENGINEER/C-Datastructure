#include <stdio.h>
int main() {
    printf("Hello, world!\n");
    printf("\n");
    char a[100];
    char b,*c;
    printf("Enter the word/String--> ");
    gets(a);
    printf("\n");
    printf("Enter the element to search--> ");
    scanf("%c",&b);
    printf("\n");
    int count = 0;
    for(int i=0;a[i]!=NULL;i++)
    {
      if(a[i]==b){
        count++;
      }
    }
    if(count>0){
    printf("The element is present and no.of time if   occured is %d",count);
    }
    else{
    printf("The element is not present \n enter the valid element to search :(");
  }
    return 0;
}

/*
INPUT AND OUTPUT
Hello, world!
Enter the word/String--> neke

Enter the element to search--> n

The element is present and no.of time if occured is 1
*/
