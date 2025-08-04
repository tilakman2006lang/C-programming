#include<stdio.h>
int main()
{
    int i,r;
    float perimeter,area;
    
    printf("enter the value of inner radius:- \n");
    scanf("%d",&i);
    printf("enter the value of outter radius:- \n");
    scanf("%d",&r);
    perimeter=2*3.142*(i+r);
    printf("the value of perimeter is:- %.2f\n",perimeter);
    area=3.142*(r*r-i*i);
    printf("the value of area is:- %.2f\n",area);
}