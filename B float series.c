#include<stdio.h>
main()
{
    int i,j,n;
    float sum=1.0;
    printf("enter no. of terms:-\n");
    scanf("%d",&n);
    printf("1/1");
    for (i=2,j=3;i<=n;i++,j+=2)
    {
        if (i%2==0)
        {
        printf("+%d/%d",i,j);
        sum=sum+(float)i/j;
        }
        else
        {
        printf("-%d/%d",i,j);
        sum=sum-(float)i/j;
        }
    }
    printf("\nsum is %.2f",sum);
}    