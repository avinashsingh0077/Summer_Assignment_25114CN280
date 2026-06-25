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

    int temp = arr[size - 1];

    //Rotating array to right
    for(int i = size - 1; i > 0 ; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;

    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}