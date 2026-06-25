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

    printf("Column-wise Sum : \n");

    //Calculating column-wise sum
    for(int i = 0; i < cols; i++){
        int sum = 0;
        for(int j = 0; j < rows; j++){
            sum += mat1[j][i];
        }
        printf("Sum of Column %d : %d\n", i + 1, sum);
    }

    return 0;
}