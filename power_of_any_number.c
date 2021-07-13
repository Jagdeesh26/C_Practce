#include <stdio.h>
#include <math.h>

int main()
{
    int base, exponent;
    printf("Enter base \n");
    scanf("%d", &base);
    printf("Enter exponent \n");
    scanf("%d", &exponent);
    int result = pow(base, exponent);
    printf("\nResultent value:- %d", result);
    return 0;
}
