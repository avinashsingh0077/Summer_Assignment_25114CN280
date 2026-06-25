#include<stdio.h>
#include<string.h>
int main(){
    char word[10][50], temp[50];
    int n;

    //Asking the user to enter total number of words
    printf("Enter number of words : ");
    scanf("%d", &n);

    //Asking the user to enter all the words
    printf("Enter words : ");
    for(int i = 0; i < n; i++) {
        scanf("%s", word[i]);
    }

    //Sorting all the entered words
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(strlen(word[i]) > strlen(word[j])) {
                strcpy(temp, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], temp);
            }
        }
    }

    //Printing words sorted by length
    printf("Words sorted by length : ");
    for(int i = 0; i < n; i++) {
        printf("%s ", word[i]);
    }

    return 0;
}