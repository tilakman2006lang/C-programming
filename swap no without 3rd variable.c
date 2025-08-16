#include<stdio.h>
int main()
{
     int no,a,b;
     printf("Enter any two digit no:-\n");
     scanf("%d%d",&a,&b);
     a=(a+b)-a;
     b=(a+b)-b;
     printf("the value of a is %d and b is %d",a,b);
}     