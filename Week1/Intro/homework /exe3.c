#include <stdio.h>

int main() {

    //3.Write a C program to print all Prime numbers between 1 to n.
    int n, flag;
    printf("\n Enter a number  between 1 to n: ");
    scanf("%d", &n);
    printf("\n Prime numbers between %d and %d are: ", 1, n);
    for (int i = 1; i <= n; i++) {

        if (i == 1 || i == 0)
            continue;

        flag = 1;

        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
            printf("%d ", i);
    }

    return 0;
