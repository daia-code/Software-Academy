#include <stdio.h>

int main() {
    int n;
    printf("\nEnter an  number: ");
    scanf("%d", &n);
    int result=-~n +(~1);; // N = 5 = - ~(0b 0000 0101) + 0b 0000 0000
    printf("%d",result);
    return 0;
}
