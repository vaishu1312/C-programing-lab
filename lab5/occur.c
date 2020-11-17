#include<stdio.h>
#include<string.h>
void main()
{
char x,str1[10];
char *a;
printf("Enter the first string: ");
gets(str1);
printf("Enter the character: ");
scanf("%c",&x);
a=strchr(str1,x);
printf("The character %c is found at the index position %d\n", a,a-str1);
}
