#include<stdio.h>
struct payslip
 {
  char name[25];
  int id;
  char month[20];
  int year;
  float basic,hra,da,pf,bonus,tax,net;
 };
void input(struct payslip *emp);
void display(struct payslip *emp);
void compute(struct payslip *emp);


void main()
{
 struct payslip emp;
 input(&emp);
 compute(&emp);
 display(&emp);
}

void input(struct payslip *emp)
{
 printf("Enter employees's name: ");
 scanf("%s",emp->name);
 printf("Enter employees's id: ");
 scanf("%d",&emp->id);
 printf("Enter month: ");
 scanf("%s",emp->month);
 printf("Enter year: ");
 scanf("%d",&emp->year);
 printf("Enter employees's basic pay: ");
 scanf("%f",&emp->basic);
}

void compute(struct payslip *emp)
{
 emp->hra=0.1*(emp->basic);
 emp->da=0.05*(emp->basic);
 emp->pf=0.1*(emp->basic);
 emp->bonus=0.05*(emp->basic);
 emp->tax=0.15*(emp->basic);
 emp->net=(emp->basic)+(emp->hra)+(emp->da)+(emp->bonus)-(emp->pf)-(emp->tax);
}

void display(struct payslip *emp)
{
 printf("\n\n\t SALARY SLIP FOR %s - %d\t\t\n\n",emp->month,emp->year);
 printf("NAME OF EMPLOYEE: %s\n",emp->name);
 printf("EMPLOYEE ID     : %d\n\n",emp->id);
 printf("\tEARNINGS\t    DEDUCTION\n\n");
 printf("BASIC PAY:  %9.2f\tPF(10%) :  %9.2f\n",emp->basic,emp->pf);
 printf("HRA(10%) :  %9.2f\tTAX(15%):  %9.2f\n",emp->hra,emp->tax);
 printf("DA(5%)   :  %9.2f\n",emp->da);
 printf("BONUS(5%):  %9.2f\n",emp->bonus);
 
 printf("\n\t\tNET PAY:  %9.2f\n\n",emp->net);
}
