#include<stdio.h>
void main()
{
float a,b,c,d,e,x,y,min;
printf("enter the first number : ");
scanf("%f",&a);
printf("enter the second number : ");
scanf("%f",&b);
printf("enter the third number : ");
scanf("%f",&c);
printf("enter the fourth number : ");
scanf("%f",&d);
printf("enter the fifth number : ");
scanf("%f",&e);
x=(a<b?a:b);
y=(c<d?c:d);
min=(x<y)&&(x<e)?x:(y<e)&&(y<a)?y:e;
printf("The smallest number is %.2f\n",min);
}
