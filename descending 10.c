#include<stdio.h>
main()
{
    int i=10,end;
    printf("enter the end\n");
    scanf("%d",&end);
    while(i >= end)
    {
    printf("\n%d",i);
    i--;
    }
}