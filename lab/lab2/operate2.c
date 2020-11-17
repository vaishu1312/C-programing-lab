#include<stdio.h>
void main()
{
int a=0,b=1,c=-1;
float x=2.5,y=0.0;
printf("a=a+(b=b-(c=c*10))\n");
printf("a= %d\n",a=a+(b=b-(c=c*10)));
printf("x*y<a+b||c= %d\n",x*y<a+b||c);
printf("(x>y)+!a||c++= %d\n",(x>y)+!a||c++);
printf("x*5 && 5 || (b/c)= %d\n" ,x*5 && 5 || (b/c));
}
