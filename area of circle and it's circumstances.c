#include<stdio.h>
int main()
{
     int r;
     float area,circumference;
     printf("enter the radius of circle:-\n");
     scanf("%d",&r);
     area=3.142*r*r;
     printf("area of circle is:- %.2f\n",area);
     circumference=2*3.142*r;
     printf("the circumference of circle is:- %.2f",circumference);
 }    