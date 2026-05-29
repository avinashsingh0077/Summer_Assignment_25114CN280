#include<stdio.h>
int main(){
    int n,rev=0,remainder,original;
    printf("ENTER THE NUMBER TO CHECK FOR PALINDROME :");
    scanf("%d",&n);
    original=n;
    while(n>0){
        remainder=n%10;
        rev=rev*10+remainder;
        n=n/10;
    }
    if(original==rev){
    printf("%d IS A PALINDROME NUMBER.\n",original);
    } else {
        printf("%d IS NOT A PALINDROME NUMBER.",original);
    }
    return 0;
}