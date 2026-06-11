/*      A
       ABA
      ABCBA
     ABCDCBA
    ABCDEDCBA
*/
                                              
#include<stdio.h>
int main(){
    for(int i=65;i<=69;i++){
        for(int j=1;j<=69-i;j++){
            printf(" ");
        }
        for(int j=65;j<=i;j++){
            printf("%c",j);
        }
        for(int j=i-1;j>=65;j--){
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}