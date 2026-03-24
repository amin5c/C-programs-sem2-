#include <stdio.h>

int main() {
    int n,a[10];
    printf("Enter no. of elements: ");
    scanf("%d", &n);  

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);  
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
