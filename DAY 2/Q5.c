#include<stdio.h>
int main(){
    int n,sum=0,remainder;
    printf("ENTER THE NUMBER TO FIND THE SUM OF DIGITS : ");
    scanf("%d",&n);
    while(n>0){
        remainder=n%10;
        sum=sum+remainder;
        n=n/10;
    }
    printf("THE SUM OF DIGITS OF THE GIVEN NUMBER IS %d",sum);
    return 0;
}