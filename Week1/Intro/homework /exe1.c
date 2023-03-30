#include <stdio.h>

int main() {
    //Write a C program to input two numbers from user and find maximum between two numbers using switch case.
    int n01, n02;
    printf("\nEnter 2 numbers:");
    scanf("%d %d", &n01, &n02);
    int option = n01 < n02;
    switch (option) { // swicth (n01<n02)
        case 0: {
            printf("\n%d greater than %d", n01, n02);
            break;
        }
        case 1: {
            printf("\n%d greater than %d", n02, n01);
            break;
        }
        default: {
            printf("\n%d equals with %d", n01, n02);
        }
    }

    return 0;
}
