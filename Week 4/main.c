#include <stdio.h>

int find_majority_element(int arr[], int n) {
    int count = 0;
    int majority_element = -1;

    for (int i = 0; i < n; i++) {
        if (count == 0) {
            majority_element = arr[i];
        }
        count += (arr[i] == majority_element) ? 1 : -1;
    }

    // Verify if the majority element appears more than n/2 times
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == majority_element) {
            count++;
        }
    }

    if (count > n / 2) {
        return majority_element;
    } else {
        return -1;  // There's no majority element in the array
    }
}
