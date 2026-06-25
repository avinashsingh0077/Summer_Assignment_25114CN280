#include<stdio.h>
int main(){
    int mat1[10][10], mat2[10][10], sub[10][10];
    int rows, cols;

    //Asking user to enter rows and columns
    printf("Enter number of rows and columns : ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of first matrix : ");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of second matrix : ");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d", &mat2[i][j]);
        }
    }

    //Finding difference of both matrices
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            sub[i][j] = mat1[i][j] - mat2[i][j];
        }
    }

    printf("Subtraction of both matrices : \n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}