// Write a program to check strong number

#include<stdio.h>
int main(){
    int n,temp,rem,sum=0;
    printf("ENTER THE INTEGER : ");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        rem=n%10;
        int fact = 1;
        for(int i=1;i<=rem;i++){
            fact=fact*i;
        }
        sum = sum+fact;
        n=n/10;
    }
    if(sum==temp && temp>0){
        printf("%d IS A STRONG NUMBER.",temp);
    } else {
        printf("%d IS NOT A STRONG NUMBER.",temp);
    }
    return 0;
}