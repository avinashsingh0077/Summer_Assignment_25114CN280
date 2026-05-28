#include<stdio.h>
int main(){
    int n,fact=1;
    printf("ENTER THE NUMBER TO FIND FACTORIAL : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("THE FACTORIAL OF A GIVEN NUMBER IS : %d",fact);
    return 0;
}