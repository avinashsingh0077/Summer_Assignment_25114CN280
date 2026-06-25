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

    //Printing union of first and second array
    printf("Union of arrays : \n");

    for(int i = 0; i < size1; i++){
        printf("%d ", arr1[i]);
    }

    for(int i = 0; i < size2; i++){
        int found = 0;

        for(int j = 0; j < size1; j++){
            if(arr2[i] == arr1[j]){
                found = 1;
                break;
            }
        }

        if(found == 0){
            printf("%d ", arr2[i]);
        }
    }

    return 0;
}