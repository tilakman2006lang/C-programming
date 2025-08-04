#include<stdio.h>
int main()
{
    int v,s,u,a,t;
    printf("enter the value initial velocity:- \n");
    scanf("%d",&u);
    printf("enter the value of acceleration:- \n");
    scanf("%d",&a);
    printf("enter the value of time:- \n");
    scanf("%d",&t);
    v=u+a*t;
    printf("the value of final velocity:- %d\n",v);
    s=u*t+(float)1/2*a*t*t;
    printf("the value of distance:- %d\n",s);
}