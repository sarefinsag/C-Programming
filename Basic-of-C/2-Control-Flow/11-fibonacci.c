// The fibonacci sequence: 0,1,1,2,3,5,8,13,21...........

// upto n terms
#include<stdio.h>
int main(){
    int n,i,t1=0,t2=1,nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci Series: ");

    for(i=1; i<=n; ++i){
        printf("%d, ",t1);
        nextTerm = t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    return 0;
}

// Sequence upto a certain number
#include<stdio.h>
int main(){
    int t1=0,t2=1,nextTerm=0,n;

    printf("Enter a positive number: ");
    scanf("%d",&n);

    // display always 0 and 1 as the first two terms
    printf("Fibonacci Seris: %d, %d", t1,t2);
    nextTerm = t1 + t2;

    while(nextTerm <= n){
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    return 0;
}