#include<stdio.h>
int main()
{
     int surface_area,volume,l,b,h;
     printf("enter the length of cuboid:-\n");
     scanf("%d",&l);
     printf("enter the breath of cuboid:-\n");
     scanf("%d",&b);
     printf("enter the height of cuboid:-\n");
     scanf("%d",&h);
     surface_area=2*(l*b+l*h+b*h);
     printf("the surface area of cylinder is %d\n",surface_area);
     volume=l*b*h;
     printf("the volume of cylinder is %d",volume);
}