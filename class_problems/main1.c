#include <stdio.h>
int main(){
    //wap that prints the size of basic datatypes usinf sizeof()
    //wap and show the diff b/w int shortint longint using size and range
    //wap to swap 2 values without using 3rd variable
    int a=1;
    char c='h';
    float f=2.6;
    double d=0.01;
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(c));
    printf("%d\n",sizeof(f));
    printf("%d",sizeof(d));
    return 0;
}