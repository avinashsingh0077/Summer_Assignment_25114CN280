#include<stdio.h>
int main(){
    int mat1[10][10];
    int rows, cols;

    ////Asking the user to enter the number of rows and columns
    printf("Enter number of rows and columns : ");
    scanf("%d %d", &rows, &cols);

    //Asking the user to enter elements
    printf("Enter elements of matrix : ");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Row-wise Sum : \n");

    //Calculating row-wise sum
    for(int i = 0; i < rows; i++){
        int sum = 0;
        for(int j = 0; j < cols; j++){
            sum += mat1[i][j];
        }
        printf("Sum of Row %d : %d\n", i + 1, sum);
    }

    return 0;
}