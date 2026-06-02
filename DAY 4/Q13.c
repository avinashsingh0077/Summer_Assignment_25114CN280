//Write a program to Generate Fibonacci series

#include <stdio.h>
int main(){
    int n,firstTerm,secondTerm,nextTerm;
    firstTerm=0;
    secondTerm=1;
    
    printf("ENTER NUMBER UPTO WHICH SERIES YOU WANT : ");
    scanf("%d",&n);
    printf("FIBONACCI SERIES ARE : ");

    for(int i=1;i<=n;i++){
        printf("%d ",firstTerm);
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }
    return 0;
}