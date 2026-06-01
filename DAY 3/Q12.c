#include<stdio.h>
int calculateGCD(int a,int b){
    while(b!=0){
        int remainder = a % b;
        a=b;
        b=remainder;
    }
    return a;
}
int main(){
    int num1,num2,gcd,lcm;
    printf("ENTER THE FIRST NUMBER : ");
    scanf("%d",&num1);
    printf("ENTER THE SECOND NUMBER : ");
    scanf("%d",&num2);
    
    gcd = calculateGCD(num1,num2);
    lcm = (num1/gcd)*num2;
    printf("\nTHE LCM OF %d AND %d IS : %d\n",num1,num2,lcm);
    return 0;
}