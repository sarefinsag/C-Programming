// multiplication table upto 10
#include<stdio.h>
int main(){
    int n,i;

    printf("Enter an integer: ");
    scanf("%d",&n);

    for(i=1; i<=10; ++i){
        printf("%d * %d = %d\n", n,i,n*i);
    }
    return 0;
}


// multiplication table upto a range

#include<stdio.h>
int main(){
    int n,i,range;

    printf("Enter an integer: ");
    scanf("%d",&n);
    printf("Enter the range: ");
    scanf("%d",&range);

    for(i=1; i<=range; ++i){
        printf("%d * %d = %d\n", n,i,n*i);
    }
    return 0;
}