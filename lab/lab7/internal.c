/*2. Compute internal marks of n students for five different subjects using structures and functions.
Use required data as the members of the structure. (Hint: Use pointers to return the array)*/

#include<stdio.h>
struct internal
{
 char name[25];
 int id;
 int sub[3][5];
};
float (*calculate(struct internal *student,int n))[5];
struct internal * input(int n);

void main()
{
 int n,i,j;
 struct internal *student;
 float (*mark)[5];
 printf("Enter no of students: ");
 scanf("%d",&n);
 student=input(n);
 printf("hi");
 mark=calculate(&student,n);
 printf("hi2");
 for(i=0;i<n;i++)
 {
  for(j=0;j<5;j++)
    printf("%f ",*(*(mark+i)+j));
  printf("\n");
 }
}

struct internal * input(int n)
{
 int i,j,k;
 struct internal student[n];
 for(i=0;i<n;i++)
 {
   printf("Enter the name of student %d: ",i+1);
   scanf("%s",student[i].name);
   printf("Enter the id no of student %d: ",i+1);
   scanf("%d",&student[i].id);
   printf("Enter marks in five subjects for student %d:\n",i+1);
   for(k=0;k<3;k++)
   {
    printf("UT-%d: ",k+1);
    for(j=0;j<5;j++)
      scanf("%d",&student[i].sub[k][j]);
   }
 }
 return student;
}

float  (*calculate(struct internal *student,int n))[5]
{
 int i,j,k;
 float mark[n][5]; 
 printf("hi3");
 for(i=0;i<n;i++)
  for(j=0;j<5;j++)
   for(k=0;k<3;k++)
      mark[i][j]+=(student+i)->sub[k][j];
  for(i=0;i<n;i++)
   for(j=0;j<5;j++)
      mark[i][j]=mark[i][j]/15.0;
 return mark;
}

 
