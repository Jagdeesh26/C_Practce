#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter The First Number\n");
    scanf("%d", &a);
    printf("Second The First Number\n");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swapping  resultent value :- %d %d", a, b);
    return 0;
}
