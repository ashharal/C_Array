#include<stdio.h>
#define size 5
int main()
{
int a[size], i, max=0;
printf("enter the value of numbers");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
if(max <a[i])
max=a[i];

}
printf(" you have entered array :");
for(i=0;i<size;i++)
{
printf("%d ", a[i]);
}
printf("\n largest element of the array =%d ",max);

return 0;
}

