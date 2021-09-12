//WAP to find smallest number in an array.

#include<stdio.h>
#define size 5
int main()
{
int a[size], i, min;
printf("enter the value of numbers");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
if(min >a[i])
min=a[i];

}
printf(" you have entered array :");
for(i=0;i<size;i++)
{
printf("%d ", a[i]);
}
printf("\n smallest element of the array =%d ",min);

return 0;
}

