#include<stdio.h>
main()
{
   int amt,dis;
   printf("Enter the total amount :- \n");
   scanf("%d",&amt);
   if(amt>1000)
       { 
         dis=0.10*amt;
         amt=amt-dis;
         printf("the discount is %d and \n",dis);
       }
   printf("the final amt is %d ",amt);
}