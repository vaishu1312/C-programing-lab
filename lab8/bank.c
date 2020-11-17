/*17. Count the number of account holders whose balance is less than the minimum balance
using sequential access file./no of account holders have less than minimum balance*/
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct account
{
int acc_no;
char name[30];
float bal;
}account;
account ac;
void read();
int main()
{
int count=0;
char ch;
printf("Do you want to add an account?(Y/N) :");
scanf("%c",&ch);
if(ch=='Y')
   read();
FILE *fp;
fp=fopen("bank.txt","r");
if(fp==NULL)
{
 printf("File does not exist\n");
 return 1;
} 
printf("\nACC.No\tNAME\tBALANCE\n");
while(fread(&ac,sizeof(account),1,fp))
{
   printf("\n%d\t%s\t%9.2f\t\n",ac.acc_no,ac.name,ac.bal);
    if(ac.bal<2000)
        count++;
}
fclose(fp);
printf("\nNo. of account holders below minimum balance(Rs.2000):%d\n",count);
return 0;
}

void read()
{
int n;
	printf("Number of account holders to be added:");
	scanf("%d",&n);
	FILE *fp;
	fp=fopen("bank.txt","a");
	for(int i=0;i<n;i++)
	{	printf("Enter details for person %d-\nEnter account no:",i+1); 
		scanf("%d",&ac.acc_no);
		printf("Enter name:"); 
		scanf("%s",ac.name);
		printf("Enter balance:");
		scanf("%f",&ac.bal);
		fwrite(&ac,sizeof(ac),1,fp);
	}
	fclose(fp);
}
