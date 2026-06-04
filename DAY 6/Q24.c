// Write a program to find x^n without using pow();

#include<stdio.h>
int main(){
    int x,n;
    long long result=1;
    printf("ENTER BASE (x) : ");
    scanf("%d",&x);
    printf("ENTER EXPONENT (n) : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        result = result*x;
    }
    printf("%d^%d = %lld\n",x,n,result);
    return 0;
}