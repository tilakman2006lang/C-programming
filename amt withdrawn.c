#include<stdio.h>
main()
{
   int a,b,c,amt;
   printf("Enter the total amount to withdraw :- \n");
   scanf("%d",&amt);
   a=amt/10;
   amt=amt%10;
   b=amt/5;
   amt=amt%5;
   c=amt;
   printf("the no of 10 :- %d\nthe no of 5 :- %d\nthe no of 1 :- %d",a,b,c);
}