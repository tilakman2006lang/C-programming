#include <stdio.h>
main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 65 && ch <= 90 ) || (ch >= 97 && ch <= 120)) {
        printf("'%c' is an alphabet.\n", ch);
    } else {
        printf("'%c' is a symbol.\n", ch);
    }
}