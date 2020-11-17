#include<stdio.h>
float find_mean (float arr[],int n);
float find_median (float arr[],int n);
int find_mode (float arr[],int n,int m[]);
void main()
{
int n,i,mode,m[5];
float mean,median,a[20];
printf("Enter the no of elements: ");
scanf("%d",&n);
printf("Enter the elements: \n");
for(i=0;i<n;i++)
  scanf("%f",&a[i]);
mean=find_mean(a,n);
median=find_median(a,n);
mode=find_mode(a,n,m);
printf("The mean of the given set of elements is: %.2f\n",mean);
printf("The median of the given set of elements is: %.2f\n",median);
if (mode==0)
 printf("The given set of elements does not have a mode.");
else
 {
  printf("The mode of the given set of elements is: ");
  for(i=0;i<mode;i++)
     printf("%d ",m[i]);
 }
printf("\n");
}
float find_mean (float arr[],int n)
{
int i;
float sum=0,mean;
for(i=0;i<n;i++)
 sum+=arr[i];
mean=sum/n;
return mean;
}
float find_median (float arr[],int n)
{
float median;
int i,j,temp;
for (i=0;i<n;i++)
 for (j=0;j<n-i-1;j++)
    if (arr[j]>arr[j+1])
    { temp=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=temp;
    }
if (n%2!=0)
 median=arr[n/2];
else
 median=((arr[n/2]+arr[n/2-1])/2);
return median;
} 

int find_mode(float arr[],int n,int m[])
{
int count,maxcnt=1,i,j,k=0,c=0;
for(i=0;i<n-1;i++)
{ 
 count=1;
 for(j=i+1;j<n;j++)
   if (arr[i]==arr[j])
    count++;
 if (count>maxcnt)
 {
  k=0;
  maxcnt=count;
  m[k]=arr[i];
  k++;
 }
 else if (count==maxcnt && count!=1)
 {
  m[k]=arr[i];
  k++;
 }
}
 return k;
}
