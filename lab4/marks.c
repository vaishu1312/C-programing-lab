#include<stdio.h>
void main()
{ int i,j,count=0,k,n,MARKS[20][5];;
  float sum, subavg[5],stuavg[20];
printf("Enter no of students: ");
scanf("%d",&n);
for(j=0;j<n;j++)   //avg marks obtained by each student
{  printf("Enter marks for student %d for 5 subjects: \n",j+1);
   sum=0;
   for(i=0;i<5;i++)
   { scanf("%d",&MARKS[j][i]);
      sum+=MARKS[j][i];
   }
   stuavg[j]=sum/5;
   if (stuavg[j]<50)
     count++; 
}
printf("\nThe average marks obtained by each student is:\n");
for(i=0;i<n;i++)
   printf("The average marks obtained by student %d is : %.2f\n",i+1,stuavg[i]);
printf("\nNo of students whose average is below 50 is: %d\n",count);
printf("\nThe average mark in each subject is: \n"); //avg marks in each sub
for(i=0;i<5;i++)
{sum=0;
 for(j=0;j<n;j++)
   sum+=MARKS[j][i];
 subavg[i]=sum/n;
 printf("The average mark in subject %d is : %.2f\n",i+1,subavg[i]);
}
printf("\nEnter the number of a student: ");
scanf("%d",&k);
printf("The marks obtained by student %d is: \n",k);
for(i=0;i<5;i++)
 printf("%d  ",MARKS[k-1][i]);
printf("\nThe average marks obtained by student %d is : %.2f\n",k,stuavg[k-1]);
}
