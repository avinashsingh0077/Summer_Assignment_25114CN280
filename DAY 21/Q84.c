#include<stdio.h>  
#include<ctype.h>
int main(){
    char str[100];

    //Asking the user to enter the string
    printf("Enter a string: ");
    scanf("%s", str);

    //Converting entered string to uppercase
    for(int i = 0; str[i] != '\0'; i++) {
            str[i] = toupper(str[i]);
    }

    //Printing the uppercase string
    printf("Uppercase String: %s", str);

    return 0;
}