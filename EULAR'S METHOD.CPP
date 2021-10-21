#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
double x0,y0,h,x1,y1;
double f(double,double);
clrscr();
printf("enter the values of x0,y0,h\n");
scanf("%lf%lf%lf",&x0,&y0,&h);
do
{
y1=y0+h*f(x0,y0);
x1=x0+h;
x0=x1;
y0=y1;
}
while(x0<0.15);
printf("the result is %16.4lf",y1);
getch();
}
double f(double x,double y)
{
double g;
g=x*x+y*y;
return (g);
}