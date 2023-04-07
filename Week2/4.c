#include <stdio.h>

int countOne(int n) {
    int count = 0; // pptx makes decimal ->binary 
    while (n > 0) {
        if (n & 1 == 1) {
            count++;
        }
        n /= 2;
    }
    return count;
}

int main() {
    int num1=0, num2=0;
    do {
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);
        int count1 = countOne(num1);
        int count2 = countOne(num2);
        if (count1 > count2) {
            printf("%d", num1);
        } else if (count2 > count1) {
            printf("%d", num2);
        } else {
            printf("%d", (num1 < num2) ? num1 : num2);
        }
    }while(num1>=0 && num1< 65535 && num2>=0 && num2< 65535);

    return 0;
}
