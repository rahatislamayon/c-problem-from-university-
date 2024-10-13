#include <stdio.h>
#include <string.h>

struct Patient {
    char name[50];
    int age;
    float height;
    float weight;
    float BMI;
};

int main() {
    struct Patient patients[100];
    int i, youngestIndex = 0;

    // Input for 100 patients
    for (i = 0; i < 100; i++) {
        printf("Enter name of patient %d:\n", i + 1);
        scanf("%s", patients[i].name);

        printf("Enter age of patient %d:\n", i + 1);
        scanf("%d", &patients[i].age);

        printf("Enter height (in meters) of patient %d:\n", i + 1);
        scanf("%f", &patients[i].height);

        printf("Enter weight (in kg) of patient %d:\n", i + 1);
        scanf("%f", &patients[i].weight);

        // Calculate BMI
        patients[i].BMI = patients[i].weight / (patients[i].height * patients[i].height);

        // Find the youngest patient
        if (patients[i].age < patients[youngestIndex].age) {
            youngestIndex = i;
        }
    }

    // Print the information of the youngest patient
    printf("\nThe youngest patient is:\n");
    printf("Name: %s\n", patients[youngestIndex].name);
    printf("Age: %d\n", patients[youngestIndex].age);
    printf("Height: %.2f meters\n", patients[youngestIndex].height);
    printf("Weight: %.2f kg\n", patients[youngestIndex].weight);
    printf("BMI: %.2f\n", patients[youngestIndex].BMI);

    return 0;
}
