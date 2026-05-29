#include<stdio.h>
int main(){
    int n,rev=0,remainder;
    printf("ENTER THE NUMBER TO REVERSE :");
    scanf("%d",&n);
    while(n>0){
        remainder=n%10;
        rev=rev*10+remainder;
        n=n/10;
    }
    printf("THE REVERSE OF THE GIVEN NUMBER IS %d",rev);
    return 0;
}