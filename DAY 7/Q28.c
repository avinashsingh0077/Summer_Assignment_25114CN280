// Write a Program To Recursive reverse number.

#include<stdio.h>
void reverseNumber(int n){
    if(n==0){
        return;
    } else {
      printf("%d",n%10);
      reverseNumber(n/10);
    }
}

int main(){
    int num;
    printf("ENTER A NUMBER : ");
    scanf("%d",&num);
    printf("REVERSED NUMBER = ");
    reverseNumber(num);
    printf("\n");

    return 0;
}