#include <stdio.h>

int main() {
    int n;
    printf("\nEnter an  number: ");
    scanf("%d", &n);
    int result=-~n; // ~N = ~5 = ~(0b 0000 0101) = 0b 1111 1010 = 0xFA (signed: -6/ unsigned: 250) slide prezentare
    printf("%d",result);
    return 0;
}
