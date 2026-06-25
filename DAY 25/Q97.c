#include<stdio.h>
int main(){
    int arr1[50], arr2[50], copy_arr[100];
    int n1, n2,  i = 0, j = 0, k = 0;

    //Asking the user to enter size of first sorted array
    printf("Enter size of first sorted array : ");
    scanf("%d", &n1);

    //Asking the user enter elements of first sorted array
    printf("Enter elements of first array : ");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    //Asking the user to enter size of second sorted array
    printf("Enter size of second sorted array : ");
    scanf("%d", &n2);

    //Asking the user enter elements of second sorted array
    printf("Enter elements of second array : ");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    i = j = k = 0;

    //Merging both sorted arrays
    while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j]) {
            copy_arr[k++] = arr1[i++];
        } else {
            copy_arr[k++] = arr2[j++];
        }
    }

    while(i < n1) {
        copy_arr[k++] = arr1[i++];
    }

    while(j < n2) {
        copy_arr[k++] = arr2[j++];
    }

    //Printing the merged sorted array
    printf("Merged Sorted Array : ");
    for(i = 0; i < k; i++) {
        printf("%d ", copy_arr[i]);
    }

    return 0;
}