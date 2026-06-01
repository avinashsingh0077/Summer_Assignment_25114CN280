#include<stdio.h>
int main(){
    int start,end,prime;
    printf("ENTER THE STARTING NUMBER : ");
    scanf("%d",&start);
    printf("ENTER THE END NUMBER : ");
    scanf("%d",&end);
    printf("\nTHE PRIME NUMBER BETWEEN %d and %d ARE : ",start,end);
    for(int i=start;i<=end;i++){
        if(i<=1){
            continue;
        }
        prime=1;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if(prime==1){
            printf("%d\t",i);
        }
    }
    printf("\n");
    return 0;
}