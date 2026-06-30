#include<stdio.h>
int main(){
    int age;

    //Asking the user to enter their age
    printf("Enter your age : ");
    scanf("%d", &age);

    //Check the eligibility for voting
    if(age >= 18) {
        printf("Eligible to Vote.");
    } else {
        printf("Not Eligible to Vote.");
    }

    return 0;
}