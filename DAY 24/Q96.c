#include<stdio.h>
int main(){
    char str[100];
    int i, j;

    //Asking the user to enter a string
    printf("Enter a string: ");
    scanf("%s", str);

    //Removing duplicates
    for(i = 0; str[i] != '\0'; i++) {
        for(j = i + 1; str[j] != '\0'; ) {
            if(str[i] == str[j]) {
                for(int k = j; str[k] != '\0'; k++) {
                    str[k] = str[k + 1];
                }
            } else {
                j++;
            }
        }
    }

    //Printing string after removing duplicates
    printf("String after removing duplicates : %s", str);

    return 0;
}