// A positive integer is called an Armstrong number (of order n) if

// abcd... = an + bn + cn + dn + 
// In the case of an Armstrong number of 3 digits, the sum of cubes of each digit is equal to the number itself. For example, 153 is an Armstrong number because

// 153 = 1*1*1 + 5*5*5 + 3*3*3

#include <math.h>
#include <stdio.h>
int main() {
   int low, high, number, originalNumber, rem, count = 0;
   double result = 0.0;
   printf("Enter two numbers(intervals): ");
   scanf("%d %d", &low, &high);
   printf("Armstrong numbers between %d and %d are: ", low, high);

   // iterate number from (low + 1) to (high - 1)
   // In each iteration, check if number is Armstrong
   for (number = low + 1; number < high; ++number) {
      originalNumber = number;

      // number of digits calculation
      while (originalNumber != 0) {
         originalNumber /= 10;
         ++count;
      }

      originalNumber = number;

      // result contains sum of nth power of individual digits
      while (originalNumber != 0) {
         rem = originalNumber % 10;
         result += pow(rem, count);
         originalNumber /= 10;
      }

      // check if number is equal to the sum of nth power of individual digits
      if ((int)result == number) {
         printf("%d ", number);
      }

      // resetting the values
      count = 0;
      result = 0;
   }

   return 0;
}