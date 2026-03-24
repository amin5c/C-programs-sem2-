#include <stdio.h>
int main(){
    char c[]="hello";
    int count=0;

    for (int i;c[i]!="/0";i++){
    count++;
    }
    printf("%d",count);
    return 0;
}