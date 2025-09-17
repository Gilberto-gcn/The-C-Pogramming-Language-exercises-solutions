#include <stdio.h>

int strLength(char string[]);
void strReverse(char string[]);
void strCopy(char to[], char from[]);

int main(){
    char str[] = "abcd";
    printf("\nOriginal string: %s", str);
    strReverse(str);
    printf("\nString length: %d", strLength(str));
    
    return 0;
}

int strLength(char string[]){
    int character, length=0;
    while((character = string[length]) != '\0'){
        ++length;
    }
    return length;
}

void strCopy(char to[], char from[]){
    int i=0;
    
    while((to[i] = from[i]) != '\0')
        ++i;
}

void strReverse(char string[]){
    char reverse[strLength(string)];
    int length = strLength(string);
    int i, j=0;
    
    for(i = length-1; i>=0; --i){
        reverse[j] = string[i];
        ++j;
    }
    reverse[length] = '\0';

    printf("\nReversed string: %s", reverse);
}