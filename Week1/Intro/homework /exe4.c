#include <stdio.h>

int main() {
    //4.Write a C program to input a number from user and print multiplication table of the given number.
    int no;
    printf("\nGive a number:");
    scanf("%d", &no);
    for (int i = 1; i <= 10; ++i) {
        printf("\n%d * %d = %d", i, no, i * no);

    }

    return 0;
}
