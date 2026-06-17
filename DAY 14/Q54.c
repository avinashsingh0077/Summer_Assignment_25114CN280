//Write a program to frequency of an elements.

#include <stdio.h>
int main(){
    int n, key, count = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter the elements\n");
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter element: ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++){
        if (arr[i] == key)
            count++;
    }
    printf("Frequency = %d", count);
    return 0;
}