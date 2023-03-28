#include <stdio.h>

int main() {
    int number, sum = 0;
    printf("\n Enter the number: ");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++) {
        if (i % 2 == 1) {
            sum += i;
        }
    }
    printf("Sum of first %d numbers is %d", number, sum);

    return 0;
}
