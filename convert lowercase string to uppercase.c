#include <stdio.h>
int main() {
    int i, j, length=0;
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]",str);

    while (str[length] != '\0') {
        length++;
    }

    for (i = 0; i < length - 1; i++) {
        for (j = i + 1; j < length; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("Sorted in alphabetical order: ");
    for (i = 0; i < length; i++) {
        printf("%c", str[i]);
    }

    return 0;
}