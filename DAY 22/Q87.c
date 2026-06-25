#include<stdio.h>
int main(){
    char str[100], ch, character = 0;

    //Asking the user to enter a string
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    //Asking the user to enter the character to find it's frequency
    printf("Enter the character to find frequency : ");
    scanf("%c", &ch);

    //Counting frequency of entered character
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ch){
            character++;
        }
    }

    //Printing frequency of entered character
    printf("Frequency of '%c' : %d.", ch, character);

    return 0;
}