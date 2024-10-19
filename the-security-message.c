#include <stdio.h>
#include <ctype.h>
#include <string.h>

void changeMessage(char *message) {
    for (int i = 0; message[i] != '\0'; ++i) {
        if (isalpha(message[i]) && !strchr("aeiouAEIOU", message[i])) { // Check if it is a consonant
            if (message[i] == 'z') {
                message[i] = 'b';
            } else if (message[i] == 'Z') {
                message[i] = 'B';
            } else {
                message[i]++;
                while (strchr("aeiouAEIOU", message[i])) {
                    message[i]++;
                }
            }
        }
    }
}

int main() {
    char message[100];
    printf("Enter the message: ");
    fgets(message, sizeof(message), stdin);

    // Remove newline character if present
    size_t len = strlen(message);
    if (len > 0 && message[len-1] == '\n') {
        message[len-1] = '\0';
    }

    changeMessage(message);

    printf("Changed message: %s\n", message);
    return 0;
}
