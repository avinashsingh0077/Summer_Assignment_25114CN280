#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int palindrome = 1;

    //Asking the user to enter a string
    printf("Enter a string : ");
    scanf("%s", str);

    int length = strlen(str);

    //Checking whether string is palindrome or not
    for(int i = 0; i < length/2; i++){
        if(str[i] != str[length-1-i]){
            palindrome = 0;
            break;
        }
    }

    //Printing whether the string is palindrome or not
    if(palindrome){
        printf("Entered string is a palindrome string.");
    }else{
        printf("Entered string is not a palindrome string.");
    }

    return 0;
}