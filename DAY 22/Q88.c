#include<stdio.h>
int main() {
    char str[100];
    int space = 0;

    //Asking the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    //Finding and removing spaces in the entered string
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ') {
            str[space] = str[i];
            space++;
        }
    }

    str[space] = '\0';

    //Printing string after removing spaces 
    printf("String after removing spaces : %s", str);

    return 0;
}