#include<stdio.h>
int findGCD(int a,int b){
    while(b!=0){
        int remainder = a % b;
        a=b;
        b=remainder;
    }
    return a;
}
int main(){
    int num1,num2;
    printf("ENTER THE FIRST NUMBER : ");
    scanf("%d",&num1);
    printf("ENTER THE SECOND NUMBER : ");
    scanf("%d",&num2);
    
    int gcd = findGCD(num1,num2);
    printf("\nTHE GCD OF %d AND %d IS : %d\n",num1,num2,gcd);
    return 0;
}