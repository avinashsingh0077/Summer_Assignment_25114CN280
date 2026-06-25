#include<stdio.h>
int main(){
    int mat1[10][10], order, symmetric = 1;

    //Asking the user to enter the order of the square matrix
    printf("Enter order of sqaure matrix : ");
    scanf("%d", &order);

    //Asking the user to enter elements
    printf("Enter elements of matrix : ");
    for(int i = 0; i < order; i++){
        for(int j = 0; j < order; j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    //Checking whether the matrix is symmetric or not
    for(int i = 0; i < order; i++){
        for(int j = 0; j < order; j++){
            if(mat1[i][j] != mat1[j][i]){
                symmetric = 0;
                break;
            }
        }
    }

    if(symmetric){
        printf("Given matrix is Symmetric.");
    }else{
        printf("Given matrix is not Symmetric.");
    }

    return 0;
}