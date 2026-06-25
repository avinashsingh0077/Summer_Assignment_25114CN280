#include <stdio.h>
int main() {
    int arr[100], size;
    int sum = 0, expectedSum, missing;

    //Asking the user to enter size of array
    printf("Enter size of array : ");
    scanf("%d", &size);

    printf("Enter %d elements : ", size - 1);
    for(int i = 0; i < size - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    expectedSum = size * (size + 1) / 2;

    missing = expectedSum - sum;

    printf("Missing number = %d", missing);

    return 0;
}