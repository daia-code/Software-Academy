#include <stdio.h>

int main() {
    //5.Write a C program to input a number and find sum of first and last digit of the number.
    int nr, last, first;
    printf("\nEnter a number:");
    scanf("%d", &nr);
    last = nr % 10;
    first = nr;
    do {
        first /= 10;

    } while (first >= 10);

    printf("\n%d + %d = %d", first, last, (first + last));
    return 0;
}
