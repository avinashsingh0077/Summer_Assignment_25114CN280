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

    int index = 0;

    //Move non-zero elements to the front
    for(int i = 0; i < size; i++) {
        if(arr[i] != 0) {
            arr[index] = arr[i];
            index++;
        }
    }

    //Filling remaining positions with zeroes
    while(index < size) {
        arr[index] = 0;
        index++;
    }

    //Printing final array after moving all zeroes to end
    printf("Array after moving zeroes to end:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}