#include<stdio.h>
int binary (int n);
int octal(int n);
int hex(char *h,int n);
void main()
{
int n,b,i=0,o,d;
char h[10];
printf("Enter a decimal number: ");
scanf("%d",&n);
b=binary(n);
o=octal(n);
d=hex(&h,n);
printf("The binary equivalent of the decimal %d is %d\n",n,b);
printf("The octal equivalent of the decimal %d is %d\n",n,o);
printf("The hexadecimal equivalent of the decimal %d is ",n);
for(i=0;i<d;i++)
 printf("%c",h[i]);
printf("\n");
}
int binary(int n)
{
 int b=0,i=1,r;
 while (n!=0)
 {
  r=n%2;
  n=n/2;
  b=b+i*r;
  i*=10;
 }
 return b;
}
int octal(int n)
{
 int o=0,i=1,r;
 while (n!=0)
 {
  r=n%8;
  n=n/8;
  o=o+i*r;
  i*=10;
 }
 return o;
}
int hex(char *h,int n)
{
 int i,j=0,r,k;
 char temp,x[16]="0123456789ABCDEF";
 while (n!=0)
 {
  r=n%16;
  n=n/16;
  if (r<10)
    h[j]=x[r];
  else
      h[j]=x[r];
  j++;
 }
 k=j-1;
 for(i=0;i<j/2;i++)  //reversing the alphabet array
 { 
  temp=h[i];
  h[i]=h[k];
  h[k]=temp;
  k--;
 }
 return j;
}

