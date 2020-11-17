#include<stdio.h>
void main()
{
int A[10],sum=0,i,count=0,n;
float avg;
printf("Enter no of people: ");
scanf("%d",&n);
printf("Enter the height for %d people:\n",n);
for(i=0;i<n;i++)
{
 scanf("%d",&A[i]);
 sum+=A[i];
}
avg=sum/n;
for(i=0;i<n;i++)
 if (A[i]>avg)
   count++;
printf("The average height is %f\n",avg);
printf("The no of people above the average height is %d\n",count);
}
   


