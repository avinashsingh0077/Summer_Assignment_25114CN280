//Write a program to write function to find maximum.

#include<stdio.h>
int findMax(int a, int b){
    return (a>b)?a:b;
}
int main(){
    int num1,num2;
    printf("ENTER THE TWO NUMBERS : ");
    scanf("%d %d",&num1,&num2);
    printf("MAXIMUM = %d\n",findMax(num1,num2));
    return 0;
}