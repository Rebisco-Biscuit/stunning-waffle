/* 
2. Reverse a String in Place (Dynamic Memory)
Write a function that reverses a dynamically allocated string in place.

void reverseString(char* str);

*/

#include <stdio.h>
#include <string.h>

void reverseString(char* str);

int main() {
    char str[] = "Pointers";
    reverseString(str);
    printf("%s\n", str);
    return 0;
}

void reverseString(char* str) {
    char *left = str;
    char *right = str + strlen(str) - 1;
    
    while (left < right) {
        char temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }
}
