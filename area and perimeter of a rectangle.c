#include<stdio.h>
int main()
{
     int h,b;
     float area,perimeter;
     printf("enter the height of rectangle:-\n");
     scanf("%d",&h);
     printf("enter the base of rectangle:-\n");
     scanf("%d",&b);
     area=h*b;
     printf("area of rectangle is:- %.2f\n",area);
     perimeter=2*(h+b);
     printf("the perimeter of rectangle is:- %.2f\n",perimeter);
 }    