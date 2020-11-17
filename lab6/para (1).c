#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
char para[300],r[25],rep[25];
int i=0,words=1,n1,n2,flag=1,j;
printf("Enter the paragraph: \n");
gets(para);
while (para[i]!='\0')
 {
  if (isspace(para[i]) || ispunct(para[i]))
    words++;
  i++;
 }
printf("\nThe no of words are: %d\n\n",words);
for(i=0;para[i]!='\0';i++)
{  
    if(ispunct(para[i]))
    {     if(islower(para[i+1]))
	     para[i+1]=toupper(para[i+1]);
          else if((isspace(para[i+1])) && (islower(para[i+2])))
             para[i+2]=toupper(para[i+2]);
    }
    else if(i==0)
      	if(islower(para[i]))
	     para[i]=toupper(para[i]);
}
printf("The text after capitalization is:\n%s\n\n",para);
printf("Enter the word to be replaced: ");
scanf("%s",r);
printf("Enter the replacement word: ");
scanf("%s",rep);
n1=strlen(r);
n2=strlen(rep);
if(strstr(para,r))
{
if(n1==n2)
{
for(i=0;para[i]!='\0';i++)
{    if((para[i]==r[0])&&(isspace(para[i+n1])||ispunct(para[i+n1])))
     {	for(j=0;j<n1;j++)
         {   if(para[i+j]==r[j])
               ;
	     else
               flag=0;
               break;
         }
        if (flag)
        { for(j=0;j<n1;j++)
            para[i+j]=rep[j];
        }
    }
}
printf("The text after replacing '%s' by '%s' :\n%s\n",r,rep,para); 
}
else
    printf("Word to be replaced with ('%s')has length greater than '%s'.\n",rep,r);
}
else
    printf("Word to be replaced is not found");
}
