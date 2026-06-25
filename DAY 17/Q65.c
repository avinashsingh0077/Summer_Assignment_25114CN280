#include<stdio.h>
int main(){
    int size1, size2, total_size;

    //Asking the user to enter size of first array
    printf("Enter the size of first array : ");
    scanf("%d", &size1);

    int arr1[size1];
    
    //Asking user to enter elements of the first array
    printf("Enter elements of first array : ");
    for(int i = 0; i < size1; i++){
        scanf("%d", &arr1[i]);
    }
    //Asking the user to enter size of second array
    printf("Enter the size of second array : ");
    scanf("%d", &size2);

    int arr2[size2];
    
    //Asking user to enter elements of the second array
    printf("Enter elements of second array : ");
    for(int i = 0; i < size2; i++){
        scanf("%d", &arr2[i]);
    }
    
    //Describing the size of merged array
    total_size = size1 + size2;

    int merged_arr[total_size];

    //Copying elements of first and second array into merged array
    for(int i = 0; i < size1; i++){
        merged_arr[i] = arr1[i];
    }

    for(int i = 0; i < size2; i++){
        merged_arr[size1 + i] = arr2[i];
    }

    //Printing merged array
    printf("Merged Array : ");
    for(int i = 0; i < total_size; i++){
        printf("%d ", merged_arr[i]);
    }

    return 0;
}