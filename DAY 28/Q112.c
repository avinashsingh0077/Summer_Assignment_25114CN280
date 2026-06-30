#include<stdio.h>
struct Contact{
    char name[50];
    char phone[15];
};

int main() {
    struct Contact c[10];
    int n;

    //Asking user to enter total number of contacts
    printf("Enter number of contacts: ");
    scanf("%d", &n);

    //Asking user to enter contact details
    for(int i = 0; i < n; i++) {
        printf("\nContact %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", c[i].name);

        printf("Enter Phone Number: ");
        scanf("%s", c[i].phone);
    }

    //Displaying contact list
    printf("\n--- Contact List ---\n");

    for(int i = 0; i < n; i++) {
        printf("\nName : %s", c[i].name);
        printf("\nPhone: %s\n", c[i].phone);
    }

    return 0;
}