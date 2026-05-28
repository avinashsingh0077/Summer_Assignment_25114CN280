#include<stdio.h>
int main(){
    int n,sum=0;
    printf("ENTER THE NUMBER :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("THE SUM IS %d",sum);
    return 0;
}