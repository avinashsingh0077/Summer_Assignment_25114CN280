#include<stdio.h>
struct Employee{
    int id;
    char name[50];
    char department[50];
    float salary;
};

int main() {
    struct Employee emp[10];
    int n;

    //Asking user to enter total number of employees
    printf("Enter number of employees: ");
    scanf("%d", &n);

    //Inputing all employee details
    for(int i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Name: ");
        scanf("%s", emp[i].name);

        printf("Enter Department: ");
        scanf("%s", emp[i].department);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    //Displaying all employee details
    printf("\n----- EMPLOYEE RECORDS -----\n");

    for(int i = 0; i < n; i++) {
        printf("\nEmployee ID : %d", emp[i].id);
        printf("\nName        : %s", emp[i].name);
        printf("\nDepartment  : %s", emp[i].department);
        printf("\nSalary      : %.2f\n", emp[i].salary);
    }

    return 0;
}