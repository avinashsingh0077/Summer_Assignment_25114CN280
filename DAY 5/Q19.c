// Write a program to print factors of a number.

#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&n);

    printf("THE FACTORS ARE : ");

    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }
    return 0;
}