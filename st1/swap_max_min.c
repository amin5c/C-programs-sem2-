#include<stdio.h>
int main(){
int n, i;
    int minIndex = 0;
    int maxIndex = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 1; i < n; i++) {

        if(arr[i] < arr[minIndex]) {
            minIndex = i;
        }

        if(arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;
     printf("Array after swapping:\n");

    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

