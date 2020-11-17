#include<stdio.h>
void main()
{
int area;
int length;
int breadth;
int perimeter;
perimeter=480;
length=10;
breadth=(perimeter/2)-length;
printf("the perimeter of the rectangle is %d\n",perimeter);
printf("the length of the rectangle is %d\n",length);
printf("the breadth of the rectangle is %d\n",breadth);
area=length*breadth;
printf("the area of the rectangle is %d\n",area);
}
