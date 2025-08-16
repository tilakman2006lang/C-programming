#include<stdio.h>
main()
{
    int year;
    printf("Enter the suitable year :-\n");
    scanf("%d",&year);
    if ((year%4==0)&&(year%100!=0))
    printf("Given year is a leap year");
    else
    printf("Given year is not a leap year");
}