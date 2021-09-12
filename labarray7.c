//7)WAP to search particular value in an array and return the index number where it is located.

#include<stdio.h>
#define size 5
int main()
{
int i, num;
 int a[]={23,45,67,78,34};

 printf("enter the number for searching:");
 scanf("%d",&num);
 for(i=0;i<size;i++)
 {
 if (a[i]==num)
 {
 printf("\n the index number of %d is %d", num,i); 
 }
 
 else
 {
 printf("the given number is not present");
 exit(0);
 }
 
 }
 
 return 0;
 }
