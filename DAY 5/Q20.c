// Write A Program To Find Largest Prime Factor

#include<stdio.h>
int main(){
    int n,temp;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&n);
    temp=n;
    int i=2;

    while(n>1){
        if(n%i==0){
            n=n/i;
        } else {
            i++;
        }
    }
    printf("THE LARGEST PRIME FACTOR OF %d IS : %d\n",temp,i);

    return 0;
}