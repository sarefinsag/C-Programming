#include<stdio.h>

int main() {
    double a, b;
    
    // input two number
    printf("Enter first number: ");
    scanf("%lf", &a);
    printf("Enter second number: ");
    scanf("%lf", &b);

    // swapping

    // a = (initial_a - initial_b)
    a = a - b;

    // b = (initial_a - initial_b) + initial_b = initial_a
    b = a + b;

    // a = initial_a - (initial_a - initial_b) = initial_b
    a = b - a;

    printf("\nAfter swapping, first number = %2.lf\n", a);
    printf("After swapping, second number = %2.lf\n", b);
    return 0;
}