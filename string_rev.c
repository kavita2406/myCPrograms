// C program to reverse a string without string functions

#include<stdio.h>
#include <string.h>
#include <malloc.h>

int main(){
    char *s = NULL;
    int start = 0, end = 0;
    char temp;
    size_t len = 0;
    ssize_t read;
    
    printf("Enter any string:");
    read = getline(&s, &len, stdin);
    s[strcspn(s, "\n")] = '\0';

    end = strlen(s)-1;
   
    while( start<end){
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
    printf("Reverse String: %s\n", s);
    
    return 0;
}
