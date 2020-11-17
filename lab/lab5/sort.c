#include<stdio.h>
#include<string.h>
void main()
{
char str[10][10],temp[10][10];
int n,i,j;
printf("Enter the no of students: ");
scanf("%d",&n);
printf("Enter the name of each student: \n");
for (i=0;i<n;i++)
 scanf("%s",str[i]);

for (i=0;i<n;i++)
{
 for (j=0;j<n-i-1;j++)
    if (strcmp(str[j],str[j+1])>=1)
    { strcpy(temp[j],str[j]);
      strcpy(str[j],str[j+1]);
      strcpy(str[j+1],temp[j]); 
    }
}
printf("The sorted list of students are: \n");
for (i=0;i<n;i++)
 printf("%s\n",str[i]);
}


 

