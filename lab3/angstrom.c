#include<stdio.h>
#include<math.h>
void main()
{
int n,digits=0,l,a,sum=0;
printf("enter a number: ");
scanf("%d",&n);
a=n;
while (n>0)
{
 n=n/10;
 digits+=1;
}
n=a;
while (n>0)
{
  l=n%10;
  int j=pow(l,digits);
  sum+=j;
  n=n/10;
}
if (a==sum)
{
  printf("it is an angstrom no\n");
}
else
 printf("it is not an angstrom no\n");
}







