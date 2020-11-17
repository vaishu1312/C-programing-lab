#include<stdio.h>
void main()
{
char str[200];
int i=0,count=0;
printf("Enter the first string: ");
gets(str);
while (str[i]!='\0')
{
  if (str[i]==' ' || str[i]=='.' || str[i]=='!' || str[i]=='?')
    count++;
  i++;
}
printf("The no of words is: %d\n",count);
}
 
