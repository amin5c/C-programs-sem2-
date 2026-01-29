#include <stdio.h>

int main(){
    float marks;

    printf("Enter marks obtained: ");
    scanf("%f", &marks);

   switch ((int)marks / 10) {
        case 9: printf("A GRADE \n");
            break;
        case 8: printf(" B GRADE \n");
            break;
        default:
            printf("xyz");
    }
    return 0;
}
