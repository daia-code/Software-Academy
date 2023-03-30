#include <stdio.h>

int main() {
    //Write a C program to input a number and calculate its factorial using for loop.
    int n, fact=1;
    printf("\nEnter a number:");
    scanf("%d",&n);
    for (int i = n; i > 0; i--) {
        fact*=i;

    }
    printf("%d factorial is %d",n,fact);
    return 0;
}
