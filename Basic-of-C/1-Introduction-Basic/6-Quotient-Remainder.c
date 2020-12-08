#include<stdio.h>

int main() {
    int dividend, divisor, quotient, remainder;

    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);

    // computes quotient
    quotient = dividend / divisor;

    // computes remainder
    remainder = dividend % divisor;

    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d", remainder);
    return 0;
}