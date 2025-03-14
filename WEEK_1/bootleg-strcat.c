/*

1. Dynamic String Concatenation
Write a function that concatenates two dynamically allocated strings without using strcat.

char* concatenateStrings(const char* str1, const char* str2);

*/

// I have 2 approaches. One is commented.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concatenateStrings(const char* str1, const char* str2);


int main() {
    char* s1 = "Hello, ";
    char* s2 = "world!";
    
    char* result = concatenateStrings(s1, s2);
    printf("%s\n", result);

    
    return 0;
}

char* concatenateStrings(const char* str1, const char* str2) {
  int test = strlen(str1) + strlen(str2)+1;
  char *newString = malloc(test*(sizeof(char)));
  char *placeholder = newString;
  
  if(newString == NULL){ return NULL; }
  
  while(*str1) {
    (*newString++ = *str1++);
  }
  
  while(*str2) {
    (*newString ++ = *str2++);
  }
  // for(int i=0; i<strlen(str1); i++) {
  //   newString[i] = str1[i];
  // }
  
  // int i=strlen(str1), remaining = test-(strlen(str1));
  // for(int j=0; j<remaining; j++) {
  //   newString[i] = str2[j];
  //   i++;
  // }
  // newString[test] = '\0';
  // return newString;
  
  *newString = '\0';
  return placeholder;
}
