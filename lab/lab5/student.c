#include<stdio.h>
void main()
{
char str[10][10], alpha;
int n,i;
printf("Enter the no of students: ");
scanf("%d",&n);
printf("Enter the name of each student: \n");
for (i=0;i<n;i++)
 scanf("%s",str[i]);
printf("Enter the character: ");
scanf("%c",&alpha);
printf("\nThe students whose name starts with the letter %c is:\n",alpha);
for (i=0;i<n;i++)
   if (str[i][0]==alpha)
     printf("%s\n",str[i]);
}
     
