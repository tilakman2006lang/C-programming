#include<stdio.h>

main()
{
    int n;
    printf("Enter the value :-\n");
    scanf("%d",&n);
    if(n%5==0)
       printf("value is divisible by 5\n");
    else
       printf("value is not divisible by 5\n");
    if(n%7==0)
       printf("value is divisible by 7\n");
    else
       printf("value is not divisible by 7\n");
}