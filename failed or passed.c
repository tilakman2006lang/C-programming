#include<stdio.h>
main()
{
    int p,c,m,tm;
    float avg;
    printf("Enter the marks of p c and m:-\n");
    scanf("%d%d%d",&p,&c,&m);
    tm=p+c+m;
    printf("total marks scored are %d\nand\n",tm);
    avg=1/3.0*tm;
    printf("avg marks scored are %.2f\n",avg);
    if(avg>=70)
        printf("first class");
    else if(avg>=60)
        printf("second class");
    else if(avg>=35)
        printf("pass class");
    else if(avg<35)
        printf("sorry you are failed");
}