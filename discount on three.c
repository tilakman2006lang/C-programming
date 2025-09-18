#include<stdio.h>
main()
{
    int a,b,c,tot,dis;
    int q1,q2,q3;
    printf("Enter the quantity of pen pencil and \neraser:-\n");
    scanf("%d%d%d",&q1,&q2,&q3);
    printf("Enter the price of every single item:-\n");
    scanf("%d%d%d",&a,&b,&c);
    tot=(a*q1)+(b*q2)+(c*q3);
    printf("total sales prices is = %d\n",tot);
    if(tot>=1000)
     dis=0.20*tot;
    else if(tot>=750) 
     dis=0.15*tot;
    else if(tot>=500) 
     dis=0.8*tot;
    else
     dis=0;
     printf("discount is %d\n",dis);
     printf("and the original price is %d",tot);
}