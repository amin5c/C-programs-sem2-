#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int num=n, sum=0, d;
    while(num>=0){
        d = num%10;
        sum+=d;
        num/=10;
    }
    printf("%d", &sum);
}
