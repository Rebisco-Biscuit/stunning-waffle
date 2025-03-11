/*
Find the First Occurrence of a Character in a String
Write a function that returns a pointer to the first occurrence of a given character in a string. If the character isn’t found, return NULL.

char str[] = "pointers are hard";
char target = 'a';
char* result = findChar(str, target);
printf("%s", result);  // Output: "are hard"

*/

#include <stdio.h>
#include <string.h>

char *findChar(char* str, char target);

int main() {
    char str[] = "pointers are hard";
    char target = 'a';
    char* result = findChar(str, target);
    printf("%s", result);

}

char *findChar(char* str, char target){
    while(*str) {
        if(*str == target) { return str; }
        str++;
    }
    return NULL;
}
