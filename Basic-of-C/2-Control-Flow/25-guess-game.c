#include <stdio.h>

int main() {
    int number = 32, guess_number;
    
    printf("Enter a number (1 - 50): ");
    // the test condition is always true
    while(1) {
        scanf("%d", &guess_number);
        
        // if guessNumber is larger
        if(number<guess_number) {
            printf("Wrong! Enter a smaller one: ");
        }
        // if guessNumber is smaller
        else if(number > guess_number) {
            printf("Wrong! Enter a greater one: ");
        }
        // is equal, congrates, correct
        else {
            printf("Congratulations! Correct guess.");
            break;
            // the only way to end the loop
        }
    }
    
    return 0;
}