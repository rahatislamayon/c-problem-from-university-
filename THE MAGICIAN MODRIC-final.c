#include <stdio.h>
#include <stdbool.h>

// Recursive function to convert a number to base 6 and return the sum of its digits
int convBase(int num) {
    if (num == 0) return 0;
    return num % 6 + convBase(num / 6);
}

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to count prime numbers in a given range
int primeChecker(int a, int b) {
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) count++;
    }
    return count;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Condition 1: Check if the sum of digits of the number in base 6 is divisible by 5
    int sumOfDigits = convBase(num);
    bool condition1 = (sumOfDigits % 5 == 0);

    // Condition 2: Check the count of prime numbers between 0 and the sum of the first and last digit of the given number
    int firstDigit = num, lastDigit = num % 10;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }
    int sumOfFirstAndLast = firstDigit + lastDigit;
    int primeCount = primeChecker(0, sumOfFirstAndLast);
    bool condition2 = (primeCount > 4);

    // Final decision
    if (condition1 || condition2) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
