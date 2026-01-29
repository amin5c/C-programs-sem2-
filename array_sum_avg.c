#include <stdio.h>

int main(){
int a[5] = {13,22,32,46,75};
int sum=0,c=0;
float avg=1;
for(int i=0; i<5; i++){
    sum+=a[i];
    c++;
}
avg = sum/5;
printf("%d\n",sum);
printf("%f",avg);
return 0;
}