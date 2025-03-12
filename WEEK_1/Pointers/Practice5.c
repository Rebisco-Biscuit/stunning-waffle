/*
Copying a String Using Pointers
Task: Implement a function that copies a string from one character array to another without using strcpy().

The function should take two pointers:
A destination (dest) where the copied string will go.
A source (src) which contains the original string.
The function should copy each character from src to dest, including the \0 at the end.

void copyString(char* dest, const char* src);

A [2025 MAR 12]
*/

#include <stdio.h>

void copyString(char* dest, const char* src);

int main() {
    char src[] = "C pointers!";
    char dest[20];
    copyString(dest, src);
    printf("%s\n", dest);

    return 0;
}

void copyString(char* dest, const char* src){
      while(*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = *src;
    // while ((*dest++ = *src++)); efficient way -chatgpt
}
