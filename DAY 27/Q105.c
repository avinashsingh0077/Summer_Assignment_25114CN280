#include<stdio.h>
struct Student{
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[10];
    int size;

    //Asking the user to enter total number of students
    printf("Enter number of students : ");
    scanf("%d", &size);

    //Asking the user to enter each student details
    for(int i = 0; i < size; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    //Displaying all the students record
    printf("\n--- Student Records ---\n");

    for(int i = 0; i < size; i++) {
        printf("\nRoll No: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nMarks: %.2f\n", s[i].marks);
    }

    return 0;
}