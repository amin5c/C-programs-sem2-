#include <stdio.h>

int main() {
    int marks[10];
    int group[10] = {0};   
    int i;

    
    for(i = 0; i < 10; i++) {
        printf("Enter marks of student %d (0-100): ", i + 1);
        scanf("%d", &marks[i]);

        
        if(marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks! Enter again.\n");
            i--;   
        }
    }

    
    for(i = 0; i < 10; i++) {
        if(marks[i] == 100)
            group[9]++;     
        else
            group[marks[i] / 10]++;
    }

    
    printf("\nMarks Distribution:\n");
    for(i = 0; i < 10; i++) {
        printf("%d - %d : %d students\n", i*10, i*10 + 10, group[i]);
    }

    return 0;
}