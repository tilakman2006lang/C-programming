#include<stdio.h>
int main()
{
     int h,b;
     float am,hm;
     printf("enter the first value:-\n");
     scanf("%d",&h);
     printf("enter the second value:-\n");
     scanf("%d",&b);
     am=(float)1/2*(h+b);
     printf("the arithmetic mean is:- %.2f\n",am);
     hm=(float)2*h*b/(h+b);
     printf("the harmonic mean is:- %.2f\n",hm);
 }    