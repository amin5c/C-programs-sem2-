#include<stdio.h>
#include<string.h>
int main(){
    char str1[]= "hello";
    char str2[]="world";
    char str3[20];
    int res = strcmp(str1,str2);
    printf("%d\n",res);
    strcpy(str1,str3);
    printf("%s",str3);
    
    return 0;
}