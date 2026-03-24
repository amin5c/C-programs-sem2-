#include <stdio.h>
#include <Math.h>
int main() {
    int n, fact=1,num;
    double fx=1;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        num = pow(2,i);
        if(n<i){
        fact=fact*(n-i);
        }
        fx+=(pow(num,2)/fact);
    }
    printf("%lf",fx);
    return 0;
}