#include <stdio.h>

int main() {
    int arr[7] = {6, 8, 9, 6, 5, 2, 3};
    int min_value = arr[0]; 

    for (int i = 1; i < 7; ++i) {
        if (arr[i] < min_value) {
            min_value = arr[i];
        }
    }

    printf("The minimum value in the array is: %d\n", min_value);

    return 0;
}
