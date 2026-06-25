#include<stdio.h>
int main(){
    int mat1[10][10], order, sum = 0;

    //Asking user to enter order of square matrix.
    printf("Enter order of sqaure matrix : ");
    scanf("%d", &order);

    printf("Enter elements of matrix : ");
    for(int i = 0; i < order; i++){
        for(int j = 0; j < order; j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    //Finding sum of diagoanl element of matrix
    for(int i = 0; i < order; i++){
        sum += mat1[i][i];
    }

    printf("Sum of diagonal elements : %d", sum);
    
    return 0;
}