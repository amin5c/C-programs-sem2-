#include <stdio.h>

int main(){
int a[5] = {13,22,32,46,75};
int rev[5];

for(int i=0; i<5; i++){
    rev[i] = a[4-i];
}
for(int i=0; i<5; i++)
printf("%d ",rev[i]);
return 0;
}