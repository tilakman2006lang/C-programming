#include<stdio.h>
main()
{
    int i,a,b;
    printf("enter the value from where to where find primes:-\n");
    scanf("%d%d",&a,&b);
    while (a<=b)
    { 
        for (i=2;i<=a-1;i++)
        {    if (a%i==0)
                break;
        }
        if (i==a)
        printf("%d\t",a);
    a++;
    }    
}