/*to find if the given no is a power of 2 or not*/
#include<stdio.h>
void main()
{
int num,r;
printf("Enter a number: ");
scanf("%d",&num);
if (num%2==0)
{
 r=num/2;
 while (r%2==0)
  r=r/2;
 if (r==1)
  printf("it is a power of 2\n");
 else
  printf("it is not a power of 2\n");
}
else
{
 printf("it is not a power of 2\n");
}
}
