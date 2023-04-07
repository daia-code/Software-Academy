#include <stdio.h>

int countOne(int n) {
    int count = 0;

    while (n > 0) {    //prezentare slide
        if (n & 1 == 1) {
            count++;
        }

        n /= 2;
    }

    return count;
}

int main() {
    int num=0;
    do {
        printf("Enter an numbers : ");
        scanf("%d", &num);

            printf( "Zeros: %d ;Ones : %d\n", countOne(~num),countOne(num)); // se scade nr de 1 gasit deoarece
//introducem numere intre 0 si 255 , numere pe 8 biti
    }while(num>=0 && num<=255 );

    return 0;
}
