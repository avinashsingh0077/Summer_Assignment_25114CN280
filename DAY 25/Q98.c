#include<stdio.h>
int main(){
    char str1[100], str2[100];

    //Asking the user to enter the first string
    printf("Enter first string : ");
    scanf("%s", str1);

    //Asking the user to enter the second string
    printf("Enter second string : ");
    scanf("%s", str2);

    //Printing common characters
    printf("Common characters : ");

    for(int i = 0; str1[i] != '\0'; i++) {
        for(int j = 0; str2[j] != '\0'; j++) {
            if(str1[i] == str2[j]) {
                printf("%c ", str1[i]);
                break;
            }
        }
    }

    return 0;
}