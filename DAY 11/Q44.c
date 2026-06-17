//Write a program to write function to find factorial.

#include<stdio.h>
long long findFactorial(int n){
    long long fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int num;
    printf("ENTER THE NUMBERS : ");
    scanf("%d",&num);
    if(num<0){
        printf("FACTORIAL OF NEGATIVE NUMBER DOES NOT EXIST.");
    } else {
        printf("FACTORIAL OF %d = %lld\n",num,findFactorial(num));
    }
    return 0;
}