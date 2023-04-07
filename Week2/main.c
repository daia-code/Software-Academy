#include <stdio.h>
#include <string.h>

int main() {
    int num=0;
    do {
        printf("\nEnter an numbers : ");
        scanf("%d", &num);
        printf("\n%d",(num<<1));
        long decimal, tempDecimal;
        char binary[65];
        int index = 1;
        /* Reads decimal number from user */
        printf("\nEnter any decimal value : ");
        scanf("%ld", &decimal);

        /* Copies decimal value to temp variable */
        tempDecimal = decimal;

        while(tempDecimal!=0) {
            /* Finds decimal%2 and adds to the binary value */
            binary[index] = (tempDecimal % 2) + '0';
            tempDecimal /= 2;
            if((index & 1) == 0){ //if position is even
                printf("%d ",0);
            }else{
                printf("%d ",1);
            }
            index++;
        }
        binary[index] = '\0';
        /* Reverse the binary value found */
        strrev(binary);
//        printf("\nDecimal value = %ld\n", decimal);
//        printf("\nBinary value of decimal = %s", binary);

    }while(num>=0 && num<=30 );

    return 0;
}
