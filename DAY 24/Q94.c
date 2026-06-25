#include<stdio.h>
int main(){
    char str[100];
    int count;

    //Asking the user to enter a string
    printf("Enter a string: ");
    scanf("%s", str);

    //Compressing the string
    for(int i = 0; str[i] != '\0'; i++) {
        count = 1;

        while(str[i] == str[i + 1]) {
            count++;
            i++;
        }

        //Printing compressed string
        printf("%c=%d ", str[i], count);
    }

    return 0;
}