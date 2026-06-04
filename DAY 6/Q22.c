// Write a program to convert binary to decimal.

#include<stdio.h>
#include<math.h>
int main(){
    long long binary;
    int decimal=0,remainder,i=0;
    printf("ENTER A BINARY NUMBER : ");
    scanf("%lld",&binary);
    
    while(binary!=0){
        remainder= binary%10;
        decimal += remainder*pow(2,i);
        binary = binary/10;
        i++; 
    }

    printf("DECIMAL = %d\n",decimal);
    return 0;
}