#include<stdio.h>
void main()
{ int ch,n,a[5],ele,pos,found=0,i,j,temp,num,b[5],c[10],max,min;
printf("enter no of elements: ");
scanf("%d",&n);
printf("enter the elements: \n");
for (i=0;i<n;i++)
 scanf("%d" ,&a[i]);
printf("1-insert element\n2-delete element\n3-sort the elements\n");
printf("4-max and min\n5-merge two sets\n6--print the elements\n");
printf("enter choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:
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

case 3: //bubble sort
for (i=0;i<n;i++)
 for (j=0;j<n-i-1;j++)
    if (a[j]>a[j+1])
    { temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
    }
printf("the elements are: \n");
for (i=0;i<n;i++)
 printf("%d ",a[i]);
printf("\n");
break;

case 4: //max and min
max=a[0],min=a[0];
for (i=1;i<n;i++)
{ if (a[i]>max)
   max=a[i];
 if (a[i]<min)
   min=a[i];
}
printf("the maximum element is: %d \nthe minimum element is: %d ",max,min);
printf("\n");
break;

case 5: //merge two sets
printf("enter no of elements in the other set: ");
scanf("%d",&num);
printf("enter the elements: \n");
for (i=0;i<num;i++)
 scanf("%d" ,&b[i]);
for (i=0;i<n;i++)
  c[i]=a[i];
for (i=0;i<num;i++)
  c[i+n]=b[i];
printf("the elements are: \n");
for(i=0;i<n+num;i++)
   printf("%d ",c[i]);
printf("\n");
break;  

case 6:
printf("the elements are: \n");
for (i=0;i<n;i++)
 printf("%d ",a[i]);
printf("\n");
}
}
