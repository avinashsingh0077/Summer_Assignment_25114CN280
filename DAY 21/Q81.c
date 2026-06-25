#include <stdio.h>
int main(){
    char str[100];
    int length = 0;

    //Asking the user to enter the string
    printf("Enter a string: ");
    scanf("%s", str);

    //Calculating length of string without using strlen()
    while(str[length] != '\0') {
        length++;
    }
    
    //Printing the length of the string
    printf("Length of entered string : %d", length);

    return 0;
}