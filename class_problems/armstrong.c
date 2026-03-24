#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int temp,d,num=0;
    char n[10];

    printf("Enter a no. ");
    scanf("%s",n);

    int len=strlen(n);
    int n1 = atoi(n);

    temp=n1;
    while(temp!=0){
        d = temp%10;
        num+= pow(d,len);
        temp = temp/10;
    }
    printf("%d ",num);
    if(num==n1){
        printf("Armstrong");
    }
    else{
        printf("Not armstrong");
    }
     return 0;
}