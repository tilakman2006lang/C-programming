#include<stdio.h>
main()
{
    char ch;
    printf("Enter any character:-\n");
    scanf("%c",&ch);
    printf("the pre char is '%c'\n",ch-1);
    printf("the after char is '%c'",ch+1);
}