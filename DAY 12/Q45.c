// Write a program to write function for palindrome.

#include<stdio.h>
int isPalindrome(int n){
    int original=n,reversed=0,remainder;
    while(n>0){
        remainder = n % 10;
        reversed = reversed*10+remainder;
        n = n/10;
    }
    return (original == reversed);
}
int main(){
    int num;
    printf("ENTER THE NUMBERS : ");
    scanf("%d",&num);
    if(isPalindrome(num)){
        printf("%d IS A PALINDROME.\n",num);
    } else {
        printf("%d IS NOT A PALINDROME.\n",num);
    }
    return 0;
}