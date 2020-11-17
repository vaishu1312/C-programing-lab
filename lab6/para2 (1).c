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

printf("enter element to be inserted: ");
scanf("%d",&ele);
printf("enter the index position: ");
scanf("%d",&pos);
for (i=n;i>=pos;i--)
 a[i+1]=a[i];
a[pos]=ele;
printf("the elements are: \n");
for (i=0;i<n+1;i++)
 printf("%d ",a[i]);
printf("\n");
break;

case 2:
printf("enter element to be deleted: ");
scanf("%d",&ele);
for (i=0;i<n;i++)
 if (ele==a[i])
  { found=1;
    break;
  } 
if (found==1)
{ for (j=i;j<n;j++)
  {   a[j]=a[j+1];
  }
  printf("the elements are: \n");
  for (i=0;i<n-1;i++)
  printf("%d ",a[i]);
}
else
 printf("the element is not present in the array");
printf("\n");
break;


if(strstr(para,r))
{
 for(i=0;para[i]!='\0';i++)
 {    if((para[i]==r[0])&&(isspace(para[i+n1])||ispunct(para[i+n1])))
      {
     	for(j=0;j<n1;j++)
        {
            if(para[i+j]==r[j])
               ;
            else
             { flag=0;
               break;
             }
        }
        if (flag)
          for(j=0;j<n1;j++)
             para[i+j]=rep[j];
      }
 }
}
else
    printf("Word to be replaced is not found");
printf("The text after replacing '%s' by '%s' :\n%s\n",r,rep,para);
}
