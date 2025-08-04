#include<stdio.h>
int main()
{
     int surface_area,volume,r,h;
     printf("enter the radius of circle in cylinder:-\n");
     scanf("%d",&r);
     printf("enter the height of cylinder:-\n");
     scanf("%d",&h);
     surface_area=2*3.142*r*r+2*3.142*r*h;
     printf("the surface area of cylinder is %d\n",surface_area);
     volume=3.142*r*r*h;
     printf("the volume of cylinder is %d",volume);
}