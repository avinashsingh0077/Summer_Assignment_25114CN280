#include<stdio.h>
int main(){
    int mat1[10][10], transpose[10][10];
    int rows, cols;

    //Asking user to enter rows and columns
    printf("Enter number of rows and columns : ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of matrix : ");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    //Finding transpose of matrix
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            transpose[j][i] = mat1[i][j];
        }
    }

    printf("Transpose Matrix : \n");
    for(int i = 0; i < cols; i++){
        for(int j = 0; j < rows; j++){
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}