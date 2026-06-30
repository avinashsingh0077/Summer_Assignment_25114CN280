#include<stdio.h>
int roll[10], marks[10], n;
char name[10][50];
void inputData(){

    //Asking user to enter total number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    //Asking user to enter all student details
    for(int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
    }
}

void displayData(){
    printf("\n----- STUDENT RECORDS -----\n");

    for(int i = 0; i < n; i++) {
        printf("\nRoll No : %d", roll[i]);
        printf("\nName    : %s", name[i]);
        printf("\nMarks   : %d\n", marks[i]);
    }
}

void searchStudent(){
    int r, found = 0;

    //Asking user to enter roll number to search
    printf("Enter Roll No to search: ");
    scanf("%d", &r);

    for(int i = 0; i < n; i++) {
        if(roll[i] == r) {
            printf("\nStudent Found\n");
            printf("Roll No : %d\n", roll[i]);
            printf("Name    : %s\n", name[i]);
            printf("Marks   : %d\n", marks[i]);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Student Not Found\n");
}

int main(){
    int choice;

    inputData();

    //Displaying the menu to the user
    do {
        printf("\n----- MENU -----\n");
        printf("1. Display Records\n");
        printf("2. Search Student\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                displayData();
                break;

            case 2:
                searchStudent();
                break;

            case 3:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}