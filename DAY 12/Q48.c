//Write a program to write function for perfect number.

#include <stdio.h>
int isPerfect(int n){
    int sum = 0;
    for (int i = 1; i < n; i++){
        if (n % i == 0)
            sum += i;
    }
    return sum == n;
}
int main(){
    int n;
    printf("ENTER A NUMBER: ");
    scanf("%d", &n);
    if (isPerfect(n))
        printf("%d IS A PERFECT NUMBER",n);
    else
        printf("%d IS NOT A PERFECT NUMBER",n);
    return 0;
}