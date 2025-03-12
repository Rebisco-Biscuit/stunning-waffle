/*
Write a program that dynamically creates an array of students, stores multiple students, and prints their details.
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
    Student *book = malloc(sizeof(Student)*3);
    
    if(book == NULL) { return 1; }
    
    strcpy(book[0].name, "John Doe");
    book[0].age = 25;
    book[0].gpa = 4.0;
    
    strcpy(book[1].name, "Jane Doe");
    book[1].age = 23;
    book[1].gpa = 3.7;
    
    strcpy(book[2].name, "J Doe");
    book[2].age = 23;
    book[2].gpa = 3.7;    
    
    for(int i=0; i<3; i++){ 
        printf("Name: %s", book[i].name);
        printf("\nAge: %d", book[i].age);
        printf("\nGPA: %.1f\n\n", book[i].gpa);    
    }
    
    free(book);
}
