#include<stdio.h>
void selectionsort(int* a,int n);
void main()
{
int n,a[10],i,j;
printf("Enter no of elements: ");
scanf("%d",&n);
printf("Enter the elements: \n");
for (i=0;i<n;i++)
 scanf("%d" ,&a[i]);
selectionsort(&a,n);
printf("The sorted array is: \n");
for (i=0;i<n;i++)
 printf("%d ",a[i]);
printf("\n");
}

void selectionsort(int* a,int n)
{
 int i,j,k,minidx,temp;
 for (i=0;i<n-1;i++)
 {
   minidx=i;
   for (j=i+1;j<n;j++)
    if (a[minidx]>a[j])
      minidx=j;
   temp=a[i];
   a[i]=a[minidx];
   a[minidx]=temp;
   printf("At the end of iteration %d , the list is:\n",i+1);
   for (k=0;k<n;k++)
      printf("%d ",a[k]);
  printf("\n");
  }
}
