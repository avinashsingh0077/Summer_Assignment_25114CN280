//Write a program to count even and odd elements.

#include <stdio.h>
int main(){
    int n, even = 0, odd = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 0){
            even++;
        }
        else {
          odd++;
        }
    }
    printf("Even Count = %d\n", even);
    printf("Odd Count = %d", odd);
    return 0;
}