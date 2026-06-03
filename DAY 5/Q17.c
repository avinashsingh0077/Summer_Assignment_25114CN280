// Write a program to check perfect number

#include<stdio.h>
int main(){
    int n,sum=0;
    printf("ENTER THE POSITIVE NUMBER : ");
    scanf("%d",&n);
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum += i;
        }
    }
    if(sum==n && n>0){
        printf("%d IS A PERFECT NUMBER.",n);
    } else {
        printf("%d IS NOT A PERFECT NUMBER.",n);
    }
    return 0;
}