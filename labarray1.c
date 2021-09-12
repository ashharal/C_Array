//WAP to calculate average marks of a 10 students.

#include<stdio.h>
int main()
{

 int student[10], i, sum=0;
 printf("enter the marks of student:");
 for(i=0;i<10;i++)
 {
 scanf("%d",&student[i]);
 
 sum =sum + student[i];
 }
 
 printf("\n you have enterd the array");
 for(i=0;i<10; i++)
 {
 printf("%d ",student[i]);
 
 
 }
 printf("\n avearge of marks = %d",sum/10);
 return 0;
 }
