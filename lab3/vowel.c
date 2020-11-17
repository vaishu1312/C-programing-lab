#include<stdio.h>
void main()
{
int i=65;
while (i<=90)
{
printf("%c ",i);
switch((char)i)
{
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
printf("is a vowel\n");
break;
default:
printf("is not a vowel\n");
}
i++;
}
}
