#include<stdio.h>
void main()
{
int type;
float fee,hd,ha,h,m1,m2,h1,h2;
printf("1-truck/bus\n2-car\n");
printf("3-scooter/cycle/motorcycle\n");
printf("enter type of vehicle: ");
scanf("%d",&type);
printf("enter the time while entering: ");
scanf("%f %f",&h1,&m1);
printf("enter the time while leaving: ");
scanf("%f %f",&h2,&m2);
hd=h2+(m2/60);
ha=h1+(m1/60);
h=hd-ha;
if (h<=3)
{ 
 if (type==1)
 {
 fee=h*20;
 }
 else if (type==2)
 {
 fee=h*10;
 }
 else if (type==3)
 {
  fee=h*5;
 }
}
else
{
 if (type==1)
 {
  fee=(3*20)+((h-3)*30);
 }
 else if (type==2)
 {
 fee=(3*10)+((h-3)*20);
 }
 else if (type==3)
 {
 fee=(3*5)+((h-3)*10);
 }
}
printf("The total parking fee is %.2f rupees.\n",fee);
}
 
 
 





