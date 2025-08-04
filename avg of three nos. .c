#include<stdio.h>
int main()
{
    int a,b,c;
    float d;
    printf("enter the first value:\n");
    scanf("%d",&a);
    printf("enter the second value:\n");
    scanf("%d",&b);
    printf("enter the third value:\n");
    scanf("%d",&c);
    d=(float)1/3*(a+b+c);
    printf("the average of nos. is: %f",d);
}