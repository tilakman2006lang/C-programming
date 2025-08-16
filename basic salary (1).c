#include<stdio.h>
main ()
{
    int emp_id,sal;
    float hr,da,pt;
    printf("Enter the Employee id:- \n");
    scanf("%d",&emp_id);
    printf("Enter the basic salary:- \n");
    scanf("%d",&sal);
    hr=(float)10/100*sal;
    da=(float)30/100*sal;
    pt=(float)5/100*sal;
    printf("the employe id is :- %d\n",emp_id);
    printf("the basic salary is :- %d\n",sal);
    printf("the house rent is :- %.2f\n",hr);
    printf("the dear allowance is :- %.2f\n",da);
    printf("the professional tax is :- %.2f\n",pt);
}