#include<stdio.h>
void main()
{
int a,b,ch;
printf("1.add\n2.subtract\n3.multiply\n4.division\n5.square of number\n");
printf("enter your choice: ");
scanf("%d",&ch);
if (ch==1 || ch==2 || ch==3 || ch==4)
{
 scanf("%d %d",&a,&b);
 if (ch==1)
 {
  printf("the sum of %d and %d is %d\n",a,b,a+b);
 }
 else if (ch==2)
 {
  printf("the difference of %d and %d is %d\n",a,b,a-b);
 }
  else if (ch==3)
 {
  printf("the product of %d and %d is %d\n",a,b,a*b);
 }
  else if (ch==4)
 {
  printf("the quotient of %d and %d is %d\n",a,b,a/b);
  printf("the remainder is %d\n",a%b);
 }

}
else
{
 printf("enter the a number: ");
 scanf("%d",&a);
 printf("the square of %d is %d\n",a,a*a);
}
}
 


