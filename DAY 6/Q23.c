// Write a program to count set bits in a number.

#include<stdio.h>
int main(){
    int n,count=0;
    printf("ENTER A NUMBER : ");
    scanf("%d",&n);

    while(n>0){
        if(n%2==1){
            count++;
        }
        n=n/2;
    }
    printf("NUMBER OF SET BITS = %d\n",count);
    return 0;
}