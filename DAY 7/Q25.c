// Write a Program To Recursive Factorial.

#include<stdio.h>
long long factorial(int n){
    if(n==0 || n==1){
        return 1;
    } else {
        return n*factorial(n-1);
    }
 }

    int main(){
        int num;
        printf("ENTER A NUMBER : ");
        scanf("%d",&num);

        printf("FACTORIAL OF %d = %lld\n",num,factorial(num));
        
        return 0;
    }