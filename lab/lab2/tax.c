#include<stdio.h>
void main()
{
float tax,income;
printf("enter your income: ");
scanf("%f",&income);
if (income<150000)
{
printf("no tax\n");
}
else if (150000<=income && income<300000)
{
printf("Tax is 10 %% of income\n");
tax=0.1*income;
}
else if (300001<=income && income<500000)
{
printf("Tax is 20 %% of income\n");
tax=0.2*income;
}
else
{
printf("Tax is 30 %% of income\n");
tax=0.3*income;
}
printf("Tax to be paid: %f\n",tax);
}

