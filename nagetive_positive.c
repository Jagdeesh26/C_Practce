#include <stdio.h>

int main()
{
    int num;
    printf("Enter The Number\n");
    scanf("%d", &num);
    if (num > 0)
    {
        printf(" %d Is a Positive number", num);
    }
    else
    {
        printf(" %d Is a Nagetive Number ", num);
    }
    return 0;
}
