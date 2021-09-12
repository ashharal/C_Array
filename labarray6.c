//6) Write a C program to compute sum of diagonal elements of a 2D array of size 3*3

#include<stdio.h>
int main()
{
  int i,j,m,n, m1[m][n], sum=0;
  
  printf("Enter the rows and coulumn of matrix");
  scanf("%d%d",&m,&n);
  
  printf("enter the elements of matrix :");
  for(i=0;i<m;i++)
  {
  for(j=0;j<n;j++)
  {
  scanf("%d",&m1[i][j]);
  if(i==j)
  {
  sum=sum+m1[i][j];
  }
  
  }
  }
  
  printf("sum of diagonal elements = %d ",sum);
  
  return 0;
  }
