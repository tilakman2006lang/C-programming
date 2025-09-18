#include<stdio.h>
main()
{
    int i,j,n;
    float sum=1.0;
    printf("enter no. of terms:-\n");
    scanf("%d",&n);
    printf("1/1");
    for (i=1,j=2;j<=n;j++)
    {
    printf("+%d/%d",i,j);
    sum=sum+(float)i/j;
    }
    printf("\nsum is %.2f",sum);
}    