#include<stdio.h>
int main()
{
     int h,b;
     float area;
     printf("enter the height of triangle:-\n");
     scanf("%d",&h);
     printf("enter the base of triangle:-\n");
     scanf("%d",&b);
     area=(float)1/2*(h*b);
     printf("area of triangle is:- %.2f\n",area);
 }    