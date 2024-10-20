#include <stdio.h>

// User-defined function to calculate the product of all digits of the ID
int digitMult(int id) {
    int product = 1;
    while (id > 0) {
        product *= id % 10; // Get the last digit and multiply it to the product
        id /= 10; // Remove the last digit
    }
    return product;
}

int main() {
    int id=388;
    //printf("Enter the last three digits of your student ID: ");
    //scanf("%d", &id);

    int product = digitMult(id); // Call the user-defined function
    printf("The product of the digits is: %d\n", product); // Print the result

    return 0;
}
