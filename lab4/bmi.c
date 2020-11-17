#include<stdio.h>
#include<math.h>
void main()
{
float arr[10][2],bmi[10];
int n,i;
printf("enter the no of people: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 printf("enter height in metres for person %d : ",i+1);
 scanf("%f",&arr[i][1]);
 printf("enter weight in kilograms for person %d : ",i+1);
 scanf("%f",&arr[i][2]);
} //bmi formula=weight/height^2
printf("the BMI of %d people is:\n",n);
for(i=0;i<n;i++)
{
 bmi[i]=arr[i][2]/(arr[i][1]*arr[i][1]);
 printf("%d) height: %.2f , weight: %.2f , bmi: %.2f\n",i+1,arr[i][1],arr[i][2],bmi[i]);
}
}
