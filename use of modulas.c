#include<stdio.h>
int main()
{
     int rev,sum,no,a,b,c,d;
     printf("enter any 4 digit no.:- \n");
     scanf("%d",&no);
     a=no%10;
     no=no/10;
     b=no%10;
     no=no/10;
     c=no%10;
     no=no/10;
     d=no%10;
     sum=a+b+c+d;
     printf("the sum of 4 digit is %d\n",sum);
     rev=a*1000+b*100+c*10+d*1;
     printf("the reverse of digits is %d\n",rev);
}    