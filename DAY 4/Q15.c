//Write a program to Check Armstrong number

#include <stdio.h>
#include<math.h>
int main(){
    int n,sum=0,d,temp,digits=0;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&n);
    temp=n;
    int countTemp=n;
    while(countTemp>0){
        digits++;
        countTemp=countTemp/10;
    }
    while (n>0)
    {
    d=n%10;
    sum = sum + (int)(pow(d,digits)+0.5);
    n=n/10;
    }
    if(sum==temp){
        printf("NUMBER IS ARMSTRONG.");
    } else {
        printf("NUMBER IS NOT ARMSTRONG.");
    }
    return 0;

}