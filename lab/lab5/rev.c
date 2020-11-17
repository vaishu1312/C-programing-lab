#include<stdio.h>
void main()
{
char str[10],alpha[10],temp;
int i=0,j=0,k,len=0;
printf("Enter the first string: ");
gets(str);
while  (str[i]!='\0')
{
 len++; //to find the length of the string entered
 if ((str[i]>=48 && str[i]<=57) || (str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
  { alpha[j]=str[i];  //assigns the alphabets and numbers
    j++;  //length of the array alpha
  }
 i++;
}
k=j-1;
for(i=0;i<j/2;i++)  //reversing the alphabet array
{ 
 temp=alpha[i];
 alpha[i]=alpha[k];
 alpha[k]=temp;
 k--;
}
k=0;
for(i=0;i<len;i++)
{  if ((str[i]>=48 && str[i]<=57) || (str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
   {  str[i]=alpha[k]; //reverses the alphabets
      k++;
   }
}
printf("The reversed string without changing the position of the special characters is: %s\n",str);
}


