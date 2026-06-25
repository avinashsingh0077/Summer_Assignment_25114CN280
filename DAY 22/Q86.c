#include<stdio.h>
int main(){
    char str[100], words = 1;

    //Asking the user to enter a string
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    //Finding total number of words
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            words++;
        }
    }

    //Printing total number of words
    printf("Total number of words : %d.", words);

    return 0;
}