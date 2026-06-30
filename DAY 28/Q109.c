#include<stdio.h>
struct Book{
    int id;
    char name[50];
    char author[50];
};

int main() {
    struct Book b[10];
    int n;

    //Asking user to enter total number of books
    printf("Enter number of books: ");
    scanf("%d", &n);

    //Asking the user to enter books details
    for(int i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &b[i].id);

        printf("Enter Book Name: ");
        scanf("%s", b[i].name);

        printf("Enter Author Name: ");
        scanf("%s", b[i].author);
    }

    //Printing books details
    printf("\n--- Library Records ---\n");

    for(int i = 0; i < n; i++) {
        printf("\nBook ID: %d", b[i].id);
        printf("\nBook Name: %s", b[i].name);
        printf("\nAuthor: %s\n", b[i].author);
    }

    return 0;
}