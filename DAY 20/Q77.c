#include<stdio.h>
int main(){
    int mat1[10][10], mat2[10][10], product[10][10];
    int rows1, cols1, rows2, cols2;

    //Asking the user to enter the number of rows and columns of first matrix
    printf("Enter number of rows and columns of first matrix : ");
    scanf("%d %d", &rows1, &cols1);

    //Asking the user to enter the number of rows and columns of second matrix
    printf("Enter number of rows and columns of second matrix : ");
    scanf("%d %d", &rows2, &cols2);

    //Asking the user to enter elements of first matrix
    printf("Enter elements of first matrix : ");
    for(int i = 0; i < rows1; i++){
        for(int j = 0; j < cols1; j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    //Asking the user to enter elements of second matrix
    printf("Enter elements of second matrix : ");
    for(int i = 0; i < rows2; i++){
        for(int j = 0; j < cols2; j++){
            scanf("%d", &mat2[i][j]);
        }
    }

    //Initialize product matrix
    for(int i = 0; i < rows1; i++){
        for(int j = 0; j < cols2; j++){
            product[i][j] = 0;
        }
    }

    //Multiplying both matrices
    for(int i = 0; i < rows1; i++){
        for(int j = 0; j < cols2; j++){
            for(int k = 0; k < cols1; k++){
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    //Printing the product matrix
    printf("Product of both matrices : \n");
    for(int i = 0; i < rows1; i++){
        for(int j = 0; j < cols2; j++){
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}