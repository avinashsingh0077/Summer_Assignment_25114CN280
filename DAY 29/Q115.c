#include<stdio.h>
#include<string.h>
int main(){
    char str[100], rev[100];
    int choice, len, i, flag;

    //Asking the user to enter a string
    printf("Enter a string: ");
    scanf("%s", str);

    //Displaying all string operations menu
    do {
        printf("\n--- STRING OPERATIONS MENU ---\n");
        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Check Palindrome\n");
        printf("4. Display String\n");
        printf("5. Exit\n");

        //Asking user for their choice
        printf("Enter your choice: ");
        scanf("%d", &choice);

        //Performing operations according to user choice
        switch(choice) {
            case 1:
                len = strlen(str);
                printf("Length = %d\n", len);
                break;

            case 2:
                len = strlen(str);

                for(i = 0; i < len; i++) {
                    rev[i] = str[len - 1 - i];
                }

                rev[i] = '\0';

                printf("Reversed String = %s\n", rev);
                break;

            case 3:
                len = strlen(str);
                flag = 1;

                for(i = 0; i < len / 2; i++) {
                    if(str[i] != str[len - 1 - i]) {
                        flag = 0;
                        break;
                    }
                }

                if(flag)
                    printf("Palindrome String\n");
                else
                    printf("Not a Palindrome String\n");
                break;

            case 4:
                printf("String = %s\n", str);
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