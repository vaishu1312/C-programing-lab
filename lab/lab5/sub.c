#include<stdio.h>
#include<string.h>
void main()
{
char x[20],str1[50];
char *a;
printf("Enter the first string: ");
gets(str1);
printf("Enter the substring: ");
gets(x);
a=strstr(str1,x);
if (a)
 printf("The string %s is found in the string %s\n",x,str1);
else 
 printf("The string %s is not found in the string %s\n",x,str1);
}
