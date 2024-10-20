#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    int id;
    float cg;
};

int main() {
    int i, studentname;
    printf("How many students?\n");
    scanf("%d", &studentname);

    struct student students[studentname];

    for (i = 0; i < studentname; i++) {
        printf("Enter name, ID, and CGPA of student %d:\n", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].id, &students[i].cg);
    }

    // Initialize variables to track the best student
    int bestStudentIndex = 0;
    float highestCGPA = students[0].cg;

    for (i = 1; i < studentname; i++) {
        if (students[i].cg > highestCGPA) {
            highestCGPA = students[i].cg;
            bestStudentIndex = i;
        }
    }

    printf("\nStudent Details:\n");
    for (i = 0; i < studentname; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\nID: %d\nCGPA: %.2f\n", students[i].name, students[i].id, students[i].cg);
    }

    // Print the best student
    printf("\nBest Student: \n");
    printf("Name: %s\nID: %d\nCGPA: %.2f\n", students[bestStudentIndex].name, students[bestStudentIndex].id, highestCGPA);

    return 0;
}
