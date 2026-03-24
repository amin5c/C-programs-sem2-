#include <stdio.h>
int main(){
int n, i;
    int pos = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
            pos = i;
        }
    }

    printf("Smallest number = %d\n", min);
    printf("Position = %d\n", pos + 1);

    return 0;
}