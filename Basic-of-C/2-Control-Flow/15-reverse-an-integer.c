#include<stdio.h>
int main(){
    int n,rev=0,remainder;

    printf("enter an integer: ");
    scanf("%d",&n);

    while(n != 0){
        remainder = n%10;
        rev = rev * 10 + remainder;
        n /=10;
    }
    printf("Reversed number: %d", rev);

    return 0;
}


// another way to avoid single digit using if-else statement
#include<stdio.h>
int main(){
    int n,rev=0,remainder;

    printf("enter an integer: ");
    scanf("%d",&n);
    
    if(n<=9){
        printf("you entered single digit.");
    }
    else{
        while(n != 0){
        remainder = n%10;
        rev = rev * 10 + remainder;
        n /=10;
    }
    printf("Reversed number: %d", rev);
    }

    return 0;
}