#include <stdio.h>

struct student {
    char name[50];
    int id;
    float marks;
};

int main() {
    struct student students[4];
    int i;
    float sum = 0, average;

    // Read data from keyboard
    for(i = 0; i < 4; i++) {
        printf("Enter name, id, and marks for student %d:\n", i + 1);
        scanf("%f", &students[i].marks);
        sum += students[i].marks;
    }

    // Calculate the average
    average = sum / 4;

    // Display the report

    printf("Average: %.1f\n", average);

    return 0;
}
