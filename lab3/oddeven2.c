#include<stdio.h>
void main()
{
int m,n,i;
printf("Enter the lower range: ");
scanf("%d",&m);
printf("Enter the upper range: ");
scanf("%d",&n);
if (m%2==0)
{
 printf("the even nos are:\n");
 for(i=m;i<=n;i++)
 {
   printf("%d\n",i);
   i++;
 }
 printf("the odd nos are:\n");
 for(i=m+1;i<=n;i++)
 {
   printf("%d\n",i);
   i++;
 }
} 
else
{
  printf("the odd nos are:\n");
  for(i=m;i<=n;i++)
  {
   printf("%d\n",i);
   i++;
  }
  printf("the even nos are:\n");
  for(i=m+1;i<=n;i++)
  {
   printf("%d\n",i);
   i++;
  }
}
}
