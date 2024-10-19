#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}

// Function to calculate the sum of digits at even positions
int sumEvenPositions(int num) {
    int sum = 0;
    int position = 0;

    while (num > 0) {
        int digit = num % 10;
        if (position % 2 == 0) {
            sum += digit;
        }
        num /= 10;
        position++;
    }

    return sum;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    if (isPalindrome(num) && sumEvenPositions(num) % 2 != 0) {
        printf("Output: True (It's a Palindrome!)\n");
    } else {
        printf("Output: False (It's not a Palindrome.)\n");
    }

    return 0;
}
