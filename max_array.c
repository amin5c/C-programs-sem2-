#include <stdio.h>

int main(){
int a[5] = {13,22,32,46,75};
int max=0;

for(int i=0; i<5; i++){
    if (a[i]>max){
        max=a[i];
    }
}
printf("%d",max);
return 0;
}