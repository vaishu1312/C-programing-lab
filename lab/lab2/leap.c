#include<stdio.h>
void main()
{
int year;
printf("enter the year: ");
scanf("%d",&year);
if (year%400==0)
 printf("the year is both leap and centurion year\n"); 
else if (year%100==0)
 printf("the year is centurion year but not leap year\n");
else if (year%4==0)
  printf("it is a leap year\n");
else
 printf("it is an ordinary year\n");
}
/*if (year%4==0)
{
 if (year%100==0)
 {
  if (year%400==0)
  {
   printf("the year is both leap and centurion year\n");
  }
  else
  {
   printf("the year is centurion year but not leap year\n");
  }
 }
 else
 {
  printf("it is a leap year\n");
 }
}
else
printf("it is an ordinary year\n");
}*/


