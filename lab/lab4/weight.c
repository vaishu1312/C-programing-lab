#include<stdio.h>
#include<math.h>
int is_perfect_cube(int num);
int is_muldiv (int num);
void main()
{
int n,a[10],w[10],i,j,temp;
printf("Enter the no of values: ");
scanf("%d",&n);
printf("Enter the values:\n");
for(i=0;i<n;i++)
 scanf("%d",&a[i]); 
for(i=0;i<n;i++)
{
 if (is_perfect_cube(a[i]))
  w[i]=5;
 else if (is_muldiv(a[i]))
  w[i]=4;
 else 
  w[i]=3;
}
printf("The values and their coressponding weights are:\n");
for(i=0;i<n;i++)
{
 printf("value: %d  weight: %d\n",a[i],w[i]);
 for (j=0;j<n-i-1;j++)
    if (w[j]>w[j+1])
    { 
      temp=w[j];
      w[j]=w[j+1];
      w[j+1]=temp;
      temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
     }
}
printf("The sorted weights are:\n");
for(i=0;i<n;i++)
  printf("value: %d  weight: %d\n",a[i],w[i]);
}
int is_perfect_cube (int num)
{
int i,cubroot;
cubroot=pow(num,1.0/3.0);
if (cubroot*cubroot*cubroot==num)
      return 1;
else
      return 0;
}
int is_muldiv(int num)
{ 
 if (num%4==0 && num%6==0)
   return 1;
 else
   return 0;
}
