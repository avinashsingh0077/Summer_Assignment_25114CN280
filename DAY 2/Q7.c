#include<stdio.h>
int main(){
    int n,prod=1,remainder;
    printf("ENTER THE NUMBER TO FIND THE PRODUCT :");
    scanf("%d",&n);
    while(n>0){
        remainder=n%10;
        prod=prod*remainder;
        n=n/10;
    }
    printf("THE PRODUCT OF DIGITS OF THE GIVEN NUMBER IS %d",prod);
    return 0;
}