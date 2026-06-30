#include<stdio.h>
int main(){
    int roll[10], marks[10], n;
    char name[10][50];

    //Asking user to enter total number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    //Asking user to enter student details
    for(int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
    }

    //Displaying all student details
    printf("\n--- STUDENT RECORDS ---\n");

    for(int i = 0; i < n; i++) {
        printf("\nRoll No : %d", roll[i]);
        printf("\nName    : %s", name[i]);
        printf("\nMarks   : %d\n", marks[i]);
    }

    return 0;
}