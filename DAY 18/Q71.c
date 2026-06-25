#include<stdio.h>
int main(){
    int size, temp, key;

    //Asking the user to enter size of array
    printf("Enter the number of elements : ");
    scanf("%d", &size);

    int arr[size];
    
    //Asking user to enter elements of the array
    printf("Enter elements of array : ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search : ");
    scanf("%d", &key);

    int low = 0, high = size - 1, found = 0, mid;

    //Binary Search
    while(low <= high){
        mid = (low + high)/2;

        if(arr[mid] == key){
            found = 1;
            printf("Element found at position %d.", mid + 1);
            break;
        }
        else if(key < arr[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    if(found == 0){
        printf("Element not found.");
    }

    return 0;
}