#include<stdio.h>
struct Product{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Product p[10];
    int n;

    //Asking user to enter total number of products
    printf("Enter number of products: ");
    scanf("%d", &n);

    //Asking user to enter product details
    for(int i = 0; i < n; i++) {
        printf("\nProduct %d\n", i + 1);

        printf("Enter Product ID: ");
        scanf("%d", &p[i].id);

        printf("Enter Product Name: ");
        scanf("%s", p[i].name);

        printf("Enter Quantity: ");
        scanf("%d", &p[i].quantity);

        printf("Enter Price: ");
        scanf("%f", &p[i].price);
    }

    //Displaying the inventory details
    printf("\n--- INVENTORY DETAILS ---\n");

    for(int i = 0; i < n; i++) {
        printf("\nProduct ID : %d", p[i].id);
        printf("\nName       : %s", p[i].name);
        printf("\nQuantity   : %d", p[i].quantity);
        printf("\nPrice      : %.2f", p[i].price);
        printf("\nValue      : %.2f\n", p[i].quantity * p[i].price);
    }

    return 0;
}