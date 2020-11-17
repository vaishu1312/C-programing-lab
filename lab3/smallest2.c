#include<stdio.h>
void main()
{
float a,b,count=0;
printf("enter a number : ");
scanf("%f",&a);
while(count<=3)
{
printf("enter another number : ");
scanf("%f",&b);
a=(a<b?a:b);
count++;
}
printf("The smallest number is %.2f\n",a);
}
