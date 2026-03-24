#include <stdio.h>
int main(){
int a,b,c;
scanf("%d\n%d\n%d",&a,&b,&c);

if((a+b)>c && (c+b)>a && (a+c)>b){
    printf("its a triangle");
}
else{
    printf("not a traingle");
}

return 0;
}