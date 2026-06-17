//Write a program to find sum and average of array.

#include <stdio.h>
int main(){
    int n, sum = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter the array elements\n ");
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++)
        sum += arr[i];
    printf("Sum = %d\n", sum);
    printf("Average = %.2f", (float)sum / n);
    return 0;
}