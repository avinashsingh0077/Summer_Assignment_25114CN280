//Write a program to Find nth Fibonacci term

#include <stdio.h>
int main(){
    int n,firstTerm,secondTerm,nextTerm;
    firstTerm=0;
    secondTerm=1;
    
    printf("ENTER Nth TERM : ");
    scanf("%d",&n);

    for(int i=3;i<=n;i++){
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }
    printf("THE %d TERM OF FIBONACCI SERIES IS %d",n ,nextTerm);

    return 0;

}