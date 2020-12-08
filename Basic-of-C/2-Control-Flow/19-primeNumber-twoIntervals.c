#include<stdio.h>
int main() {
    int low,high,i,flag;
    printf("Enter low number: ");
    scanf("%d",&low);
    printf("Enter high number: ");
    scanf("%d",&high);
    printf("Prime numbers between %d and %d are: ", low, high);

    // swapping the two number when low is greater than high
    if(low>high) {
        int temp = low;
        low = high;
        high = temp;
    }
    // iteration until low is equal to high
    while (low<high)
    {
        flag = 0;

        // ignore numbers less than 2
        if (low<=1)
        {
            ++low;
            continue;
        }
        
        // if low is a non-prime number, flag will be 1
        for ( i = 2; i <= low/2; i++)
        {
            if(low%i == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            printf("%d ", low);
        }
        // to check prime for next number
        // increase low by 1
        ++low;
    }
    
    return 0;
}