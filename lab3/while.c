#include<stdio.h>
void main()
{
int n,pos=0,neg=0,zero=0;
printf("enter numbers: ");
scanf("%d",&n);
while (n!=-1)
{
  if (n==-1)
   break;
  if (n>0)
  {
   pos+=1;
  }
  else if(n<0)
  {
   neg+=1;
  }
  else 
  {
    zero+=1;
  }
  scanf("%d",&n);
}
printf("the no of positive nos are:%d\n",pos);
printf("the no of negative nos are:%d\n",neg+1);
printf("the no of zeros are:%d\n",zero);
}
  
   
