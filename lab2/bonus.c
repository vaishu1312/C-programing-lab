#include<stdio.h>
void main()
{
char g;
float income,bonus=0;
int id;
printf("enter your id: ");
scanf("%d",&id);
printf("enter income: ");
scanf("%f",&income);
printf("enter m or f: ");
scanf(" %c",&g);
if (g=='m')
{
printf("Bonus is 5 %% of income\n");
bonus+=0.05*income;
}
else
{
printf("Bonus is 10 %% of income\n");
bonus+=0.1*income;
}
if (income<10000)
{
printf("Bonus is increased by 2 %% of income\n");
bonus+=0.02*income;
}
printf("employee id:%d\n",id);
printf("employee salary:%f\n",income);
printf("employee bonus:%f\n",bonus);
}


