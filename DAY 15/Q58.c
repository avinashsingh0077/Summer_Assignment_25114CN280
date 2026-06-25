#include<stdio.h>
int main(){
    int size;

    //Asking the user to enter size of array
    printf("Enter the number of elements : ");
    scanf("%d", &size);

    int arr[size];
    
    //Asking user to enter elements of the array
    printf("Enter elements of array : ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int temp = arr[0];

    //Rotating array to left
    for(int i = 0; i < size - 1; i++){
        arr[i] = arr[i+1];
    }
    arr[size - 1] = temp;

    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}