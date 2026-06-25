#include<stdio.h>
int main(){
    char str[100];
    int vowels = 0, consonants = 0;

    //Asking the user to enter the string
    printf("Enter a string: ");
    scanf("%s", str);

    //Calculating vowels and consonants
    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || 
        ch=='I' || ch=='O' || ch=='U') {
            vowels++;
        }
        else{
            consonants++;
        }
    }

    //Printing total vowels and consonants
    printf("Total Vowels : %d\n", vowels);
    printf("Total Consonants : %d", consonants);

    return 0;
}