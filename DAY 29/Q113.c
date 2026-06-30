#include<stdio.h>
int main(){
    int choice;
    float a, b;

    //Displaying the calculator menu
    do {
        printf("\n--- CALCULATOR MENU ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

    //Asking user for their choice
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 4) {
            //Asking user to enter two numbers
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
        }

    //Performing calculations according to user choice
        switch(choice) {
            case 1:
                printf("Result = %.2f\n", a + b);
                break;

            case 2:
                printf("Result = %.2f\n", a - b);
                break;

            case 3:
                printf("Result = %.2f\n", a * b);
                break;

            case 4:
                if(b != 0)
                    printf("Result = %.2f\n", a / b);
                else
                    printf("Division by zero not possible!\n");
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}