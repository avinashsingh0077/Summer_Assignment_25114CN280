#include<stdio.h>
int main(){
    int size, sum, found = 0;

    //Asking the user to enter size of array
    printf("Enter the number of elements : ");
    scanf("%d", &size);

    int arr[size];
    
    //Asking user to enter elements of the array
    printf("Enter elements of array : ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter required sum: ");
    scanf("%d", &sum);

    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("Pair found : %d + %d = %d\n",
                       arr[i], arr[j], sum);
                found = 1;
            }
        }
    }

    if(found == 0) {
        printf("No pair found.");
    }

    return 0;
}