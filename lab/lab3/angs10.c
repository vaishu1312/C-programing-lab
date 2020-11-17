/*first 10 angstrom nos using pre loop*/
#include<stdio.h>
#include<math.h>
void main()
{
int count=0,ang=153;
int a,n,digits,l,sum;
printf("the first ten  angstrom nos are: \n");
while (count<10)
{
 digits=0,l,sum=0;
 a=ang;
 while (ang>0)
 {
 ang=ang/10;
 digits++;
 }
 ang=a;
 while (a>0)
 {
  l=a%10;
  int j=pow(l,digits);
  sum+=j;
  a=a/10;
 }
 if (ang==sum)
 {
   printf("%d\n",ang);
   count++;
 }
 ang++;
}
}

  
