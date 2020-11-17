//xa+yb x=2 y=3
#include<stdio.h>
void display_matrix(int mat[][5],int r,int c);
void printRow(int len, int row[]);
void main()
{  int A[10][5],B[10][5],r[10][5],i,j,x=2,y=3,ra,rb,ca,cb;
printf("enter no of rows and columns in matrix A: ");
scanf("%d %d",&ra,&ca);
printf("enter no of rows and columns in matrix B: ");
scanf("%d %d",&rb,&cb);
if (ra==rb && ca==cb)
{
printf("enter the elements of matrix A\n");
for(i=0;i<ra;i++)
 for(j=0;j<ca;j++)
 {
  printf("enter element for row %d and column %d: ",i+1,j+1);
  scanf("%d",&A[i][j]);
 }
printf("enter the elements of matrix B\n");
for(i=0;i<rb;i++)
 for(j=0;j<cb;j++)
 {
  printf("enter element for row %d and column %d: ",i+1,j+1);
  scanf("%d",&B[i][j]);
 }
printf("the matrix A is: \n");
display_matrix(A,ra,ca);
printf("the matrix B is: \n");
display_matrix(B,rb,cb);
printf("X=2 and Y=3\n");
printf("XA+YB = \n");
for(i=0;i<3;i++)
 for(j=0;j<3;j++)
 {
  A[i][j]=x*A[i][j];
  B[i][j]=y*B[i][j];
  r[i][j]=A[i][j]+B[i][j];
 }
for (i = 0; i <ra; i++) {
        printRow(ra, A[i]);
        printf(" +  ");
        printRow(ra, B[i]);
        printf("\n");
    }
printf("the resultant matrix is: \n");
display_matrix(r,ra,ca);
}
else 
 printf("The matrices are not of same order\n");
}
void display_matrix(int mat[][5],int r,int c)
{ int i,j;
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
    printf("%d ",mat[i][j]); 
  printf("\n");
 }
}
void printRow(int len, int row[])
{   int i =0;
    for (i = 0; i < len; i++) 
        printf("%d  ", row[i]);
}
