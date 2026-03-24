//wap to enter n number of digits form a no. using these digits
#include<stdio.h>
int main(){
    int n,arr[n];
    long a=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        a = a*10+arr[i];
    }
    printf("%ld",a);

    return 0;
}
