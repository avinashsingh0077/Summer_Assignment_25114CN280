#include<stdio.h>
#include<string.h>
int main(){
    char name[10][50], temp[50];
    int n;

    //Asking the user to enter total number of names
    printf("Enter number of names : ");
    scanf("%d", &n);

    //Asking the user to enter all the names
    printf("Enter names : ");
    for(int i = 0; i < n; i++) {
        scanf("%s", name[i]);
    }

    //Sorting all the entered names
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(strcmp(name[i], name[j]) > 0) {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    //Printing names in alphabetical order
    printf("Names in alphabetical order : ");
    for(int i = 0; i < n; i++) {
        printf("%s ", name[i]);
    }

    return 0;
}