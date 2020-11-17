#include<stdio.h>
int fact (int x);
void main()
{
int a,n,f,sum=0,l;
printf("enter a number: ");
scanf("%d",&n);
a=n;
while (n>0)
{
  l=n%10;
  f=fact(l);  
  n=n/10;
  sum+=f;
}
if (a==sum)
{
 printf("it is an strong no\n");
}
else
{
 printf("it is not a strong no\n");
}
}

int fact (int x)
{
int fact=1;
for(int i=x;i>=1;i--)
{
   fact=fact*i;
}  
return fact;
}
 
