#include<stdio.h>
int main(){
    int n,prime=1;
    printf("ENTER THE NUMBER GREATER THAN 2 TO CHECK PRIME : ");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }
    if(prime==1){
        printf("%d IS A PRIME NUMBER.",n);
    } else {
        printf("%d IS NOT A PRIME NUMBER.",n);
    }
    return 0;
}