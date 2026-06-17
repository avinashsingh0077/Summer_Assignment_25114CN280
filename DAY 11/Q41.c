//Write a program to write function to find sum of two numbers.

#include<stdio.h>
int findSum(int a, int b){
    return a+b;
}
int main(){
    int num1,num2;
    printf("ENTER THE TWO NUMBERS : ");
    scanf("%d %d",&num1,&num2);
    printf("SUM = %d\n",findSum(num1,num2));
    return 0;
}