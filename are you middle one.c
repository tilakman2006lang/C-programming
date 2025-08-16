#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter the values of a b and c :-\n");
    scanf("%d%d%d",&a,&b,&c);
    if ((b<a)&&(c>a))
    printf("comes");
    else
    printf("dosent come");
}