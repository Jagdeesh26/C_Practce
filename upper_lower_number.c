#include <stdio.h>

int main()
{
    char ch;
    printf("write here something\n");
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90)
        printf("the entered character is Upper Case");
    else if (ch >= 97 && ch <= 122)
        printf("the entered character is Lower Case");
    else if (ch >= 48 && ch <= 57)
        printf("it is a number");

    else
        printf("it is a symbol");
    return 0;
}
