#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,d,x1,x2;
printf("enter the coefficient of x^2: ");
scanf("%f",&a);
printf("enter the coefficient of x: ");
scanf("%f",&b);
printf("enter the constant term: ");
scanf("%f",&c);
d=sqrt((b*b)-(4*a*c));
if (d>0)
{
 x1=(-b+d)/(2*a);
 x2=(-b-d)/(2*a);
 printf("The roots are real and unequal\n");
 printf("The roots are %f,%f\n",x1,x2);
}
else if (d==0)
{
 x1=(-b+d)/(2*a);
 printf("The roots are real and equal\n");
 printf("The roots are %f,%f\n",x1,x1);
}
else
 {
 printf("The equation has no real roots\n");
 }
}




