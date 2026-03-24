#include <stdio.h>
int main(){
    //wap and show the diff b/w int shortint longint using size and range
    int a=1, b=2, temp=0;
    temp = a;
    a=b;
    b=temp;
    
    printf("%d %d",a,b);
    
    return 0;
}