#include<stdio.h>
struct Book{
    int id;
    char title[50];
    char author[50];
    int quantity;
};

int main() {
    struct Book b[10];
    int n;

    //Asking user to enter total number of books
    printf("Enter number of books: ");
    scanf("%d", &n);

    //Asking user to enter all book details
    for(int i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &b[i].id);

        printf("Enter Book Title: ");
        scanf("%s", b[i].title);

        printf("Enter Author Name: ");
        scanf("%s", b[i].author);

        printf("Enter Quantity: ");
        scanf("%d", &b[i].quantity);
    }

    //Displaying all library records
    printf("\n----- LIBRARY RECORDS -----\n");

    for(int i = 0; i < n; i++) {
        printf("\nBook ID  : %d", b[i].id);
        printf("\nTitle    : %s", b[i].title);
        printf("\nAuthor   : %s", b[i].author);
        printf("\nQuantity : %d\n", b[i].quantity);
    }

    return 0;
}