#include <stdio.h>
int main(){
    int arr[] = {1,2,4,5,6,7};
    int n;
    scanf("%d",&n);
    for(int i=0;i<8;i++){
        if(n<arr[i]){
            arr[i]=n;
            arr[i]=arr[i+1];
            continue;
        }
    }
        for(int i=0;i<8;i++){
            printf("%d",arr[i]);
        }
        return 0;
}
//wap to read and display a 3x3 matrix
//transpose a 3x3 matrix
//wap to input 2 mxn matrices and calc the sum of their corresponding elements and store it in a 3rd mxn matrix
//wap to multiply 2 mxn matrices 
//linear search and binary search 