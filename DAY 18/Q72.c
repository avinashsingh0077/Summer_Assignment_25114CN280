#include<stdio.h>
int main(){
    int size, temp;

    //Asking the user to enter size of array
    printf("Enter the number of elements : ");
    scanf("%d", &size);

    int arr[size];
    
    //Asking user to enter elements of the array
    printf("Enter elements of array : ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    //Sorting array in descending order
    for(int i = 0; i < size - 1; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    //Printing array in descending order
    printf("Array in Descending order : ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}