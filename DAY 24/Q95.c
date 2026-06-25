#include<stdio.h>
#include<string.h>
int main(){
    char str[100], longest[100];
    int maxLen = 0, len = 0, start = 0;

    //Asking the user to enter a sentence
    printf("Enter a sentence : ");
    fgets(str, sizeof(str), stdin);

    //Finding longest word and its length
    for(int i = 0; ; i++) {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            len++;
        } else {
            if(len > maxLen) {
                maxLen = len;

                for(int j = 0; j < len; j++) {
                    longest[j] = str[start + j];
                }
                longest[len] = '\0';
            }

            len = 0;
            start = i + 1;
        }

        if(str[i] == '\0')
            break;
    }

    //Printing longest word and its length
    printf("Longest word : %s\n", longest);
    printf("Length :  %d", maxLen);

    return 0;
}