#include<stdio.h>
void findage(int d,int m,int y,int date,int month,int year);
int finddays(int year,int m,int date,int d,int nomonths);
int leap(int year);
void main()
{
int d1,m1,y1,d2,m2,y2;
printf("enter dob of person1: ");
scanf("%d %d %d",&d1,&m1,&y1);
printf("enter dob of person2: ");
scanf("%d %d %d",&d2,&m2,&y2);

if ((y1==y2)&&(m1==m2)&&(d1==d2))
{
printf("both are of the same age\nthe difference is 0 years 0 months 0 days\n");
}
else if (((y1==y2)&&(m1==m2)&&(d1>d2)) || ((y1>y2) || ((y1==y2)&&(m1>m2))))
{
printf("person 2 is elder\n");
findage(d2,m2,y2,d1,m1,y1);
}
else if (((y1==y2)&&(m1==m2)&&(d1<d2)) || ((y1<y2) || ((y1==y2)&&(m1<m2))))
{
printf("person 1 is elder\n");
findage(d1,m1,y1,d2,m2,y2);
}
}

void findage(int d,int m,int y,int date,int month,int year)
{
int nodays,nomonths,noyears;
if((month>m) || ((month==m) && (date>d)))
{
 noyears=year-y;
 if (date>=d)
 { 
  nomonths=month-m;
  nodays=date-d;
 }
 else 
 {
  nomonths=(month-m-1);
  nodays=finddays(year,m,d,date,nomonths); /*function to calculate days*/
 }
}
else /*if ((month<m) || ((month==m) && (date<d)))*/
{
 noyears=year-y-1;
 if (date>=d)
 { 
  nomonths=12-m+month;
  nodays=date-d;
 }
 else 
 {
  nomonths=(12-m)+month-1;
  nodays=finddays(year,m,d,date,nomonths); /*function to calculate days*/
 }
}
printf ("the difference is %d day(s) %d month(s) %d year(s)\n",nodays,nomonths,noyears);
}

int finddays(int year,int m,int d,int date,int nomonths)
{
int nodays;
if (((nomonths+m)%12)==4 || ((nomonths+m)%12)==6 || ((nomonths+m)%12)==9 || ((nomonths+m)%12)==11)
{
  nodays=30-d+date;
}
else if (((nomonths+m)%12)==2)
{
 if (leap(year)==1)
 {
  nodays=29-d+date;
 }
 else
 {
  nodays=28-d+date;
 }
}
else
{
 nodays=31-d+date;
}
return nodays;
}

int leap(int year)
{
if ((year%4==0 && year%100!=0) || year%400==0)
    return 1;
else 
     return 0;  
}

