#include <stdio.h>
#include<math.h>
void main()
{
int i,j,k=1,c,n;
long int num;
printf("enter no of rows: "); //pattern 1
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 for(j=1;j<=i;j++)
 {
  printf(" %d",k);
  k++;
 }
 printf("\n");
}
printf("\n");


j=1; 
printf("enter no of rows: ");//pattern 2
scanf("%d",&n);
c=n-1;
for (i=1;i<=n;i++)
{
 for(k=1;k<=n-i+c;k++)    
  {    
   printf(" ");    
   }    
  c--;
 num=pow(j,2);
  while (num>0)
 {
  printf("%ld ",num%10);
  num=num/10;
 }  
 j=(j*10)+1;
 printf("\n");
}
}

/*
#include<stdio.h>    
    void main()
    {  
    int i,j,k,l,n;    
    printf("enter the no of rows: ");    
    scanf("%d",&n);    
    for(i=1;i<=n;i++)    
    {    
     for(j=1;j<=n-i;j++)    
     {    
     printf(" ");    
     }    
     for(k=1;k<=i;k++)    
     {    
     printf("%d",k);    
     }    
     for(l=i-1;l>=1;l--)    
     {    
     printf("%d",l);    
     }    
    printf("\n");    
    }    
    }
*/






