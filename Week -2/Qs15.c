#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float percentage;
};

int main() {
    struct student students[10];
    int i;
    int highestIndex = 0;

    // Accept data for 10 students
    for (i = 0; i < 10; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll number: ");
        scanf("%d", &students[i].roll);
        printf("Percentage: ");
        scanf("%f", &students[i].percentage);
    }

    // Print data for all students
    printf("\nDetails of all students:\n");
    for (i = 0; i < 10; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll number: %d\n", students[i].roll);
        printf("Percentage: %.2f\n", students[i].percentage);
    }

    // Find the student with the highest percentage
    for (i = 1; i < 10; i++) {
        if (students[i].percentage > students[highestIndex].percentage) {
            highestIndex = i;
        }
    }

    // Print the record of the student with the highest percentage
    printf("\nStudent with the highest percentage:\n");
    printf("Name: %s\n", students[highestIndex].name);
    printf("Roll number: %d\n", students[highestIndex].roll);
    printf("Percentage: %.2f\n", students[highestIndex].percentage);

    return 0;
}
