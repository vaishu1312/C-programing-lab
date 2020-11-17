#include<stdio.h>
void main()
{
char str[10];
int i=0,j,len=0,flag=1;
printf("Enter the first string: ");
gets(str);
while (str[i]!='\0')
{
 len++;
 i++;
}
i=0;
j=len-1;
while (i!=j)
{ 
 if(str[i]==str[j])
 { 
   i++;
   j--;
 }
 else
 {
  flag=0;
  break;
 }
}
if(flag==1)
 printf("It is a palindrome\n");
else
 printf("It is not a palindrome\n");
}


