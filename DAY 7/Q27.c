// Write a Program To Recursive Sum of Digits.

#include<stdio.h>
int sumOfDigits(int n){
    if(n==0){
        return 0;
    } else {
        return (n%10) + sumOfDigits(n/10);
    }
}

int main(){
    int num;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&num);
    printf("SUM OF DIGITS = %d\n",sumOfDigits(num));
    return 0;
}