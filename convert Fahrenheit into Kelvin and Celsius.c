#include<stdio.h>
int main()
{
float c,f,k;
printf("enter the tempreture in ferenheit:- ");
scanf("%f",&f);
c=(float)5/9*(f-32);
printf("the tempreture in celcius is:- %.2f\n",c);
k=c+273.15;
printf("the tempreture in c is:- %.2f\n",k);
}