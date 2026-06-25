#include<stdio.h>
#include<string.h>
int main(){
    char str1[100], str2[100], rotate[200];

    //Asking the user to enter first string
    printf("Enter first string : ");
    scanf("%s", str1);

    //Asking the user to enter second string
    printf("Enter second string : ");
    scanf("%s", str2);

    //Checking rotations
    if(strlen(str1) != strlen(str2)) {
        printf("Not Rotations");
        return 0;
    }

    strcpy(rotate, str1);
    strcat(rotate, str1);

    //Printing whether strings are rotations or not
    if(strstr(rotate, str2))
        printf("Strings are Rotations.");
    else
        printf("Strings are Not Rotations.");

    return 0;
}