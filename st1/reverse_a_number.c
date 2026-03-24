#include <stdio.h>

int main() {
	// your code goes here
	int n;
	scanf("%d", &n);
	int r=n,d,num=0;
    
    while(r!=0){
        d = r%10;
        num = (num*10)+d;
        r/=10;
    }
    printf("%d", num);

}

