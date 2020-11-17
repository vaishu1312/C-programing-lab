#include<stdio.h>
void main()
{
int A[10][10],sum=0,r,c,i,j;
printf("enter no of rows and columns in the matrix: ");
scanf("%d %d",&r,&c);
if (r==c)
{
  printf("enter the elements of the matrix:\n");
  for(i=0;i<r;i++)
     for(j=0;j<c;j++)
    {
    printf("enter element for row %d and column %d: ",i+1,j+1);
    scanf("%d",&A[i][j]);
    if (i==j)
       sum+=A[i][j];
    }
  printf("The matrix is:\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
      printf("%d ",A[i][j]);
    printf("\n"); 
  }
  printf("The sum of the principal diagonal elemnts is: %d\n",sum);
}
else
 printf("The no of rows and columns are not equal\n");
}


