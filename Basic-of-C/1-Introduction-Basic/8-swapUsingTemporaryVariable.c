#include<stdio.h>

int main() {
    double first, second, temp;
    
    // input two number
    printf("Enter first number: ");
    scanf("%lf", &first);
    printf("Enter second number: ");
    scanf("%lf", &second);

    // value of first is assigned to temp
    temp = first;

    // value of second is assigned to first
    first = second;

    // value of temp(initial value of first) is assigned to second
    second = temp;

    printf("\nAfter swapping, first number = %2.lf\n", first);
    printf("After swapping, second number = %2.lf\n", second);
    return 0;
}