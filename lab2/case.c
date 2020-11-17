#include<stdio.h>
void main()
{
char ch;
printf("enter a character: ");
scanf("%c",&ch);
if (ch>='A' && ch<='Z')
{
printf("the given character %c is in uppercase\n",ch);
printf("the lowercase of the given character %c is %c\n",ch,ch+32);
}
else
{
printf("the given character %c is in lowercase\n",ch);
printf("the uppercase of the given character %c is %c\n",ch,ch-32);
}
}




