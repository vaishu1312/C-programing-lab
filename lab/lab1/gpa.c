#include<stdio.h>
void main()
{
float eng,maths,phy,chem,python;
float ceng=4,cmaths=4,cphy=3,cchem=3,cpython=3;
float  c,e,m,p,ch,py,x,gpa;
printf("enter grade points obtained in english: ");
scanf("%f",&eng);
printf("enter grade points obtained in mathematics: ");
scanf("%f",&maths);
printf("enter grade points obtained in physics: ");
scanf("%f",&phy);
printf("enter grade points obtained in chemistry: ");
scanf("%f",&chem);
printf("enter grade points obtained in python: ");
scanf("%f",&python);
e=eng*ceng;
m=maths*cmaths;
p=phy*cphy;
ch=chem*cchem;
py=python*cpython;
x=e+m+p+ch+py;
c=ceng+cmaths+cphy+cchem+cpython;
gpa=x/c;
printf("\n");
printf("SUBJECT\tGRADE POINTS\tCREDITS\n");
printf("\n");
printf("english\t%f\t%f\n",eng,ceng);
printf("maths\t%f\t%f\n",maths,cmaths);
printf("physics\t%f\t%f\n",phy,cphy);
printf("chem\t%f\t%f\n",chem,cchem);
printf("python\t%f\t%f\n",python,cpython);
printf("\n");
printf("your gpa is %f\n",gpa);
}
