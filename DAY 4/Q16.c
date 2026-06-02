// Write a program to print armstrong number in range.

#include <stdio.h>
#include<math.h>
int main(){
    int start,end,sum,d,temp,digits;
    printf("ENTER THE STARTING NUMBER : ");
    scanf("%d",&start);
    printf("ENTER THE END NUMBER : ");
    scanf("%d",&end);

    for(int i=start;i<=end;i++){
        temp=i;
        digits=0;
        while(temp>0){
            digits++;
            temp=temp/10;
        }
        temp=i;
        sum=0;
        while(temp>0){
            d=temp%10;
            sum = sum + (int)(pow(d,digits)+0.5);
            temp=temp/10;
        }
        if(sum==i){
            printf("%d ",i);
        }
    }
    return 0;
}