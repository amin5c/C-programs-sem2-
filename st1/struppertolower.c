#include <stdio.h>
#include <string.h>
int main(){
    char str1[] = "HELLO ";
    char str2[] = "WORLD";
    strcat(str1,str2);
    for(int i=0;str1[i]!=0;i++){
        if(str1[i]>=65 && str1[i]<=89){
            str1[i]+=32;
        }
    }
    printf("%s",str1);

    return 0;
}