#include<stdio.h>
void main()
{
int x;
printf("3*4+5*6=%d\n",3*4+5*6);
printf("3*(4+5)*6=%d\n",3*(4+5)*6);
printf("3*4%5/2=%d\n",3*4%5/2);
printf("3*(4%5)/2=%d\n",3*(4%5)/2);
printf("3*4%(5/2)=%d\n",3*4%(5/2));
printf("3*((4%5)/2)=%d\n",3*((4%5)/2));
}

