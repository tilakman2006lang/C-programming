#include<stdio.h>
main()
{
    char x;
    int n,i=1;
    printf("enter char x and no n :-\n");
    scanf("%c%d",&x,&n);
    while (i<=n)
    {   x=x+1;
        i++;
        printf("%c\t ",x);
    }    
}