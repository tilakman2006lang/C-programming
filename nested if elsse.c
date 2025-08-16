#include<stdio.h>
main()
{
    int p,c,m;
    float avg;
    printf("Enter marks of p c m :-\n");
    scanf("%d%d%d",&p,&c,&m);
    avg=(float)1/3*(p+c+m);
    printf("average is %.2f\n",avg);
    if ((avg)>=60)
    {    
        if (m>=60)
            printf("you will get admission for engineering");
        else    
            printf("still sorry due to maths");
    }       
    else
    printf("sorry due to less avg");
}    
