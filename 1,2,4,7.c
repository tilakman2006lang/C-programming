#include<stdio.h>
main()
{
    int a=1,no,i=0,count=1;
    printf("enter no");
    scanf("%d",&no);
    while (i<=no)
    {
        printf("%d \n",a);
        a=a+count;
        count++;
        i++;
    }
}