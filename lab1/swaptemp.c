#include<stdio.h>
void main()
{
int a;
int b;
int temp;
printf("enter the value of a: ");
scanf("%d",&a);
printf("enter the value of b: ");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("the value of a after swapping is %d\n",a);
printf("the value of b after swapping is %d\n",b);
}

