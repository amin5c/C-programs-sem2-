//swap two numbers using pass by value
//here it is swapping butt it is swapping the variables present in swap function not in main we can see by applying in print main function so for main we use pass by reference to overcome this
#include<stdio.h>
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
   printf("Swap a: %d\n",a);
      printf("Swap b: %d\n",b);
      return;
}
int main(){
int a=3;
int b=5;
swap(a,b);
printf("main a: %d\n",a);
printf("main b: %d",b);
return 0;
}







//swap two numbers by call by reference
//here both main and swap are same so mainly they are nott making any other blovk it the other function is directly accessing the main function variables through pointers pointing address
#include<stdio.h>
void swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
   printf("Swap a: %d\n",*x);
   printf("Swap b: %d\n",*y);
      return;
}
int main(){
int a=3;
int b=5;
swap(&a,&b);
printf("main a: %d\n",a);
printf("main b: %d",b);
return 0;
}


//wap to find big of 3
//find area of circle
//time to mins
//calc pnc(pnr)
//sum of series 1/1!+1/2!+1/3!...1/n!
//sum of series 1/1! + 4/4! + 27/3! +...n^n/n!