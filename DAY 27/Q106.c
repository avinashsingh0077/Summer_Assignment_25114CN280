#include<stdio.h>
struct Employee{
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[10];
    int size;

    //Asking the user to enter total number of employee's
    printf("Enter number of employees: ");
    scanf("%d", &size);

    //Asking the user to enter each employee details
    for(int i = 0; i < size; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Name: ");
        scanf("%s", emp[i].name);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    //Displaying all the employee's record
    printf("\n--- Employee Records ---\n");

    for(int i = 0; i < size; i++) {
        printf("\nID: %d", emp[i].id);
        printf("\nName: %s", emp[i].name);
        printf("\nSalary: %.2f\n", emp[i].salary);
    }

    return 0;
}