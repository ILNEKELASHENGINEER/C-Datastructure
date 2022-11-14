#include <stdio.h>
#include<math.h>
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
    int count = 0,count2=0;
    for(int i=0;a[i]!='\0';i++)
    {
      if(a[i]==b){
        count++;
      }
      count2++;
    }
   int per = (100*count)/count2;
    if(count>0){
    printf("The element is present and no.of time if occured is %d times and %d%% in a word",count,per);
    }
    else{
    printf("The element is not present \nenter the valid element to search :(");
  }
    return 0;
}
/*
INPUT AND OUTPUT
Hello, world!

Enter the word/String--> nekelash

Enter the element to search--> n

The element is present and no.of time if occured is 1 times and 12% in a word

Hello, world!

Enter the word/String--> foobar

Enter the element to search--> o

The element is present and no.of time if occured is 2 times and 33% in a word

///////////  ERROR SAMPLE  //////////

Hello, world!

Enter the word/String--> malar

Enter the element to search--> n

The element is not present
enter the valid element to search :(
*/

////////////////////////////////    LITTLE OPTIMISED CODE     \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
#include<stdio.h>
#include<math.h>
int main() {
    char a[100];
    char b,*c;
    gets(a);
    scanf("%c",&b);
    int count = 0,count2=0;
    for(int i=0;a[i]!='\0';i++)
    {
      if(a[i]==b){
        count++;
      }
      count2++;
    }
   int per = (100*count)/count2;
    if(count>0){
    printf("Occurrence of the letter is %d%%",per);
    }
    else{
    printf("The element is not present \nenter the valid element to search :(");
  }
    return 0;
}
/*
INPUT AND OUTPUT
foobar
o
Occurrence of the letter is 33%
hold
d
Occurrence of the letter is 25%


///////////  ERROR SAMPLE  //////////
malar
n
The element is not present
enter the valid element to search :(
*/
