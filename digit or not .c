#include <stdio.h>
main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch>=48) && (ch<=57))
        printf("'%c' is a digit\n", ch);
    else
        printf("not a digit");
}