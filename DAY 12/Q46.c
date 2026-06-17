//Write a program to write function for armstrong number.

#include <stdio.h>
#include <math.h>

int isArmstrong(int n){
    int temp = n, digits = 0;
    int sum = 0;
    while (temp){
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp){
        sum += round(pow(temp % 10, digits));
        temp /= 10;
    }
    return sum == n;
}
int main(){
    int n;
    printf("ENTER THE NUMBER : ");
    scanf("%d", &n);
    if (isArmstrong(n))
        printf("%d IS ARMSTRONG NUMBER",n);
    else
        printf("%d IS NOT ARMSTRONG NUMBER",n);
    return 0;
}