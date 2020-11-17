#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,d,e,total,average;
printf("enter the marks obtained in english: ");
scanf("%f" ,&a);
printf("enter the marks obtained in maths: ");
scanf("%f" ,&b);
printf("enter the marks obtained in physics: ");
scanf("%f" ,&c);
printf("enter the marks obtained in chemistry: ");
scanf("%f" ,&d);
printf("enter the marks obtained in python: 70");
scanf("%f" ,&e);
total=a+b+c+d+e;
average=(total)/5;
printf("the total marks obtained:%f \n",total);
printf("the average is:%f \n",average);
if (average>=75)
{
printf("You have obtained Distinction\n");
}
else if (average>=60 && average<75)
{
printf("You have obtained First class\n");
}
else if (average>=50 && average<60)
{
printf("You have obtained Second class\n");
}
else if (average>=40 && average<50)
{
printf("You have obtained Third class\n");
}
else
printf("You have failed\n");
}






