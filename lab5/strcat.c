#include<stdio.h>
#include<string.h>
void main()
{
char str1[10],str2[10];
printf("Enter the first string: ");
gets(str1);
printf("Enter the second string: ");
gets(str2);
// concatenation using strcat
strcat(str1,str2);
printf("%s\n",str1);
}
