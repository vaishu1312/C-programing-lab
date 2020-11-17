#include<stdio.h>
void main()
{
float a,b,c,min;		
printf("enter the first number : ");
scanf("%f" ,&a);
printf("enter the second number : ");
scanf("%f" ,&b);
printf("enter the third number : ");
scanf("%f" ,&c);
min=(a<b)&&(a<c)?a:(b<c)&&(b<a)?b:c;
printf("The smallest number is %f\n",min);
}
