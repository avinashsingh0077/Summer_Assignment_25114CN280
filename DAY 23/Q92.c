#include<stdio.h>
int main(){
    char str[100];
    int freq[256] = {0};
    int max = 0;
    char maxChar;

    //Asking the user to enter a string
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++){
        freq[str[i]]++;
    }

    for(int i = 0; str[i] != '\0'; i++){
        if(freq[str[i]] > max){
            max = freq[str[i]];
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character : %c\n", maxChar);
    printf("Frequency : %d", max);

    return 0;
}