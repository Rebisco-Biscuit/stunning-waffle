/*
Reverse a String Using Pointers
Write a function that reverses a string in place using only pointers.

void reverseString(char* str);

A [2025 MAR 12]
*/

#include <stdio.h>
#include <string.h>

void reverseString(char* str);

int main() {
    char str[] = "hello";

    reverseString(str);
    printf("Reversed string: %s\n", str);

    return 0;
}

void reverseString(char* str) {
    char *ptr = str, *ptr2 = str+(strlen(str)-1);
    
    while (ptr < ptr2) {
        char temp = *ptr;
        *ptr = *ptr2;
        *ptr2 = temp;
        
        ptr++;
        ptr2--;
    }
}

