#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

struct Student {
    int id;
    char name[50];
    int marks;
};

void AddStudent(struct Student stds[], int *count);
void ShowStudents(struct Student stds[], int count);
void SearchStudents(struct Student stds[], int count);

int main(){
    int opt = 0;
    struct Student stds[100];  // the students will be stored in an array of structs.
    int count = 0;     // To track how many students their are.
    do{
        printf("===== STUDENT DATABASE =====\n");
        printf("1. Add Student\n");
        printf("2. Show Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your Choice: ");
        scanf("%d", &opt);
        switch(opt){
            case 1:
                //add student function
            AddStudent(stds, &count); // "&" because if we use only count, with this funtion would receive a copy and also this won't effect the main function.
                printf("\n");
                break;              // &count lets us modify the real variable.           
            case 2:
                // show students funtion
                ShowStudents(stds, count);
                printf("\n");
                break;
            case 3:
                // search students function
                SearchStudents(stds, count);
                printf("\n");
                break;
            case 4:
                printf("GOODBYE !!! ! ! ! \n");
                break;
            default:
                printf("Enter valid INPUT!!!!!\n");
                break;
        }
    }while(opt != 4);
}
void AddStudent(struct Student stds[], int *count){
    
    printf("Enter Student ID: ");
    scanf("%d", &stds[*count].id);
    
    printf("Enter Name: ");
    scanf(" %s", stds[*count].name);
    
    printf("Enter Marks: ");
    scanf("%d", &stds[*count].marks);
    
    
    (*count)++;
    
}
void ShowStudents(struct Student stds[], int count){
    
    printf("ID | NAME | MARKS\n");
    for(int i=0; i<count; i++){
        printf("%d | %s | %d\n",
                stds[i].id,
                stds[i].name,
                stds[i].marks);
    }
}
void SearchStudents(struct Student stds[], int count){
    int inval =0;
    int found =0;
    printf("Enter with ID u want to search: ");
    scanf("%d", &inval);
    for(int i=0; i<count; i++){
        if(stds[i].id == inval ){
            printf("the searched student is: %d %s %d\n",
                                        stds[i].id,
                                        stds[i].name,
                                        stds[i].marks);
            found = 1;
            break;
        }
    }
    if (found == 0){
        printf("THe student doesn't exists!!!\n");
    }
}