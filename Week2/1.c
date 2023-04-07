#include <stdio.h>



int main() {
    int n;
    do{
        printf("Enter a signed 16-bit number: ");
        scanf("%d", &n);    // 1
                                  // 0000 0000 0000 0001
                                  // n>>8 0000 0000 0000 0000
                                  // n<<8 0000 0001 0000 0000
                                  //      0000 0001 0000 0000
                                  // 2^8=256
        n = (n >> 8) | (n << 8); // se muta bitii la dreapta sau  a  la stanga
        printf("%u\n",n);
    } while (32768 <n && n> 32767);

    return 0;
}


