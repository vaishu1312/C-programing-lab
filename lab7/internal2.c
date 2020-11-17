#include<stdio.h>
struct student
{  int rno;
   int sub[5][3];
   float int_marks[5];
};
void internal(struct student stu[], int n);
void main()
{
int n,i,j,k;
printf("Enter number of students: ");
scanf("%d",&n);
struct student stu[n];
for(i=0;i<n;i++)
{	stu[i].rno=i+1;
	printf("Enter marks in five subjects for student %d:\n",stu[i].rno);
	for(j=0;j<3;j++)
	{  printf("UT-%d : ",j+1);
	   for(k=0;k<5;k++)
	   {	scanf("%d",&stu[i].sub[k][j]);
	   }
	}
}
internal(stu,n);
printf("\n\tINTERNAL MARKS\n");
printf("\nROLL NO\tENG\tMATHS\tPHY\tCHEM\tFRENCH\n");
for(i=0;i<n;i++)
{   printf("\n%d \t",i+1);
    for(k=0;k<5;k++)
	printf("%4.2f\t",stu[i].int_marks[k]);
}
printf("\n");
}
void internal(struct student stu[], int n)
{
int i,j,k,sum;
for(i=0;i<n;i++)
   for(k=0;k<5;k++)
   {	sum=0;
	for(j=0;j<3;j++)
           sum+=stu[i].sub[k][j];
	stu[i].int_marks[k]=(float)sum/15;
   }
}
