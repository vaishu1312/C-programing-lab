#include<stdio.h>
void main()
{
char ch;
printf("enter a character: ");
scanf("%c",&ch);
if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' ||  ch=='U')
{
printf("it is a vowel\n");
}
else
printf("it is not a vowel\n");
}

