/* 
Structs 

Define a struct Student with:
name (string)
age (int)
gpa (float)

Dynamically allocate memory for a student, store values, print the student’s info, and free the memory.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    float gpa;
} Student;


int main() {
    Student *info = malloc(sizeof(Student));
    
    if(info == NULL) {
        return 1;
    }
    
    strcpy(info->name, "Jane Doe");
    info->age = 25;
    info->gpa = 4.2;
    
    printf("Name: %s", info->name);
    printf("\nAge: %d", info->age);
    printf("\nGPA: %.1f", info->gpa);
    
    free(info);
}
