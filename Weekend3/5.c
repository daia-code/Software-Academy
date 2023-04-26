
#include <stdio.h>

int* copyArr(int* s, int* d, int size){
    for(int i = 0; i < size; i++){
        *(d + i) = *(s + i);
    }
    return d;
}

int main() {
    int source[5] = {1, 2, 3, 4, 5};
    int destination[5];

    int *ptr = copyArr(source, destination, 5); // Call the function and store the returned pointer in a variable

    // Print the values of the copied array using the returned pointer
    printf("\nContents of the copied array:\n");
    for(int i = 0; i < 5; i++){
        printf("%d ", *(ptr + i));
    }

    return 0;
}
