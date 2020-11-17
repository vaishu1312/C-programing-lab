#include<stdio.h>
void main()
{
int m,n,i;
printf("Enter the lower range: ");
scanf("%d",&m);
printf("Enter the upper range: ");
scanf("%d",&n);
for(i=m;i<=n;i++)
 if (i%2==0)
  printf("%d is an even no\n",i);
 else
   printf("%d is an odd no\n",i);
}
