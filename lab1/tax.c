#include<stdio.h>
void main()
{
float tax,income;
printf("enter your income: \n");
scanf("%f",&income);
if (income<150000)
{
printf("no tax\n");
}
else if (150000<=income && income<=300000)
{
tax=0.1*income;
}
else if (300001<=income && income<=500000)
{
tax=0.2*income;
}
else
{
tax=0.3*income;
}
printf("Tax to be paid: %f\n",tax);
}

