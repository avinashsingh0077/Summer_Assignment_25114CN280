#include<stdio.h>
int main(){
    int n,d,count=0;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&n);
    while(n>0){
        n=n/10;
        count=count+1;
    }
    printf("THE NUMBER OF DIGITS IN A GIVEN NUMBER IS : %d",count);
    return 0;
}