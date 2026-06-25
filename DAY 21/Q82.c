#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int length;

    //Asking the user to enter the string
    printf("Enter a string: ");
    scanf("%s", str);

    //Finding the length of the string
    length = strlen(str);

    //Printing the reversed string
    printf("Reversed String : ");
    for(int i = length - 1; i >= 0; i--){
        printf("%c", str[i]);
    }

    return 0;
}