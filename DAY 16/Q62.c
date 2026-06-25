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

    int maxFreq = 0, maxElement;

    for(int i = 0; i < size; i++) {
        int count = 1;

        for(int j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count > maxFreq) {
            maxFreq = count;
            maxElement = arr[i];
        }
    }

    printf("Element with maximum frequency : %d\n", maxElement);
    printf("Frequency : %d\n", maxFreq);

    return 0;
}