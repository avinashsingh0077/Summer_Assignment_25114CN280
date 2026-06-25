#include<stdio.h>
#include<string.h>
int main(){
    char str1[100], str2[100];
    int freq1[256] = {0}, freq2[256] = {0};

    //Asking the user to enter first string
    printf("Enter first string: ");
    scanf("%s", str1);

    //Asking the user to enter second string
    printf("Enter second string : ");
    scanf("%s", str2);

    if(strlen(str1) != strlen(str2)){
        printf("Not Anagrams.");
        return 0;
    }

    for(int i = 0; str1[i] != '\0'; i++){
        freq1[str1[i]]++;
        freq2[str2[i]]++;
    }

    for(int i = 0; i < 256; i++){
        if(freq1[i] != freq2[i]){
            printf("Not Anagrams.");
            return 0;
        }
    }

    printf("Anagrams.");

    return 0;
}