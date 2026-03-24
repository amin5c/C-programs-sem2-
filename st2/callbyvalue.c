#include <stdio.h>
#include <conio.h>

int check_relation(int a,int b);

int main(){
    int a=5,b=3,res;
    //clrscr();
    res = check_relation(a,b);
    
    if(res==0){
        printf("\n EQUAL");
    }
    if(res==-1){
        printf("\n a is greater than b");
    }
    if(res==1){
        printf("\n a is less than b");
    }
    getch();
    return 0;
}

int check_relation(int a, int b){
    if(a==b){
        return 0;
    }
    else if(a>b){
        return 1;
    }
    else{
    return -1;
    }
}