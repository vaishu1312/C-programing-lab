#include<stdio.h>
void main()
{
float amount,balance=0;
int ch,i,j=0;
do
{
printf("1-deposit\n2-withdrawal\n");
printf("enter your choice(1/2): ");
scanf("%d",&ch);
if (ch==1)
{
 printf("enter amount be deposited: ");
 scanf("%f",&amount);
 balance+=amount;
 printf("your balance is: %.2f rupees \n",balance);
}
else if (ch==2)
{
 printf("enter amount be withdrawn: ");
 scanf("%f",&amount);
 if (amount>balance)
 {
  for(i=1;i<=3;i++)
  {
   printf("Balance insufficient\nTry again\n");
   printf("This is your chance no %d\n",i);
   printf("enter amount be withdrawn: ");
   scanf("%f",&amount);
   if (amount<=balance)
   {
   balance-=amount;
   printf("your balance is: %.2f rupees \n",balance);
   break;
   }
   j=1;
   printf("Balance insufficient\nSorry!,account blocked\n");
   printf("your balance is: %.2f rupees \n",balance);
  } //for i<=3
 } //if a>b
 else
 {
 balance-=amount;  
 printf("your balance is: %.2f rupees \n",balance); 
 }
} //else if ch==2
if (j==0)
{
 printf("1-continue\n2-exit\n");
 printf("enter your choice(1/2): ");
 scanf("%d",&ch);
 if (ch==2)
 {
  printf("Transaction complete, welcome!\n");
 }
} // if j==0
} /*do*/
while (ch==1);
}
