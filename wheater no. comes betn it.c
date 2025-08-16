#include<stdio.h>

main()
{
    int a,b,c;
    printf("Enter the value of 1st,2nd and 3rd value :-\n");
    scanf("%d%d%d",&a,&b,&c);
    if((a > b && a < c) || (a > c && a < b))
       printf("value comes betn 2nd and 3rd one\n");
    else
       printf("value does not come between 2nd and 3rd one\n");
}