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

    //Bubble Sorting
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    //Printing sorted array
    printf("Sorted Array : ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}