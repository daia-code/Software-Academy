#include <stdio.h>

int main() {
    unsigned short REG = 10;   // initial value of the register

    while ((REG & 0x0002) == 0 && (REG & 0x4000) == 0) {
        // check bits 1 and 14
        // if neither bit is set, continue looping

        // manually change the value of REG using a debugger

    }

    printf("Bit 1 or 14 has been set to 1. Exiting the loop.\n");

    return 0;
}
