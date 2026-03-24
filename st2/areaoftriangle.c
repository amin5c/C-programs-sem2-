#include<stdio.h>

void calculate_area(float *b, float *h, float *a);

int main(){
    float lg, br, ar;

    scanf("%f", &lg);  
    scanf("%f", &br);   

    calculate_area(&lg, &br, &ar);

    printf("%.2f", ar);

    return 0;
}

void calculate_area(float *b, float *h, float *a){
    *a = 0.5 * (*b) * (*h); 
}