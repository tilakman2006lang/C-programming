#include<stdio.h>
int main()
{
     int no,a,b,rev;
     printf("enter any two digit no.\n");
     scanf("%d",&no);
     a=no%10;
     no=no/10;
     b=no%10;
     rev=a*10+b*1;
     printf("the rev no. is %d",rev);
}     