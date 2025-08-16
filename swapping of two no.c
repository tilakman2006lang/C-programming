#include<stdio.h>
main()
{
  int a,b,c;
  printf("Enter the value of a\n");
  scanf("%d",&a);
  printf("Enter the value of b\n");
  scanf("%d",&b);
  printf("the value of a and b before swaping :-\n%d and %d\n",a,b);
  c=b;
  b=a;
  a=c;
  printf("the value of a and b after swaping is\n%d and %d\n",a,b);
 } 