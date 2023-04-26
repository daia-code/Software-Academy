#include <stdio.h>

float add(float x, float y) {
    return x + y;
}

float sub(float x, float y) {
    return x - y;
}

float mul(float x, float y) {
    return x * y;
}

int main() {
    int opt;
    float value1, value2;

    float (*ops[3])(float, float) = {add, sub, mul}; // Array of function pointers

    do {
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Exit");
        printf("\nOption: ");
        scanf("%d", &opt);
        if (opt >= 1 && opt <= 3) {
            printf("Numbers? ");
            scanf("%f %f", &value1, &value2);
            float result = ops[opt - 1](value1, value2); // Call the selected operation function
            printf("Result: %.2f\n", result);
        }
    } while (opt != 4);

    printf("Goodbye!\n");
    return 0;
}
