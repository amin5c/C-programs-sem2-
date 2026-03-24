// Write a program in C to print all unique elements in an array.
// Test Data :
// Print all unique elements of an array:
// ------------------------------------------
// Input the number of elements to be stored in the array: 4
// Input 4 elements in the array :
// element - 0 : 3
// element - 1 : 2
// element - 2 : 2
// element - 3 : 5
// Expected Output :
// The unique elements found in the array are:
// 3 5
#include <stdio.h>
int main(){
    int n,a[10];

    printf("Enter no. of elements: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter element %d: ",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if (a[i]==a[j]){
                count++;
                break;
            }
        }
        if (count==0){
            printf("%d ",a[i]);
        }
    }
    

    return 0;
}