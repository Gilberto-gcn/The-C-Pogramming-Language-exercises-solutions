/*Write a program to print all input lines that are longer than 80 characteres*/

#include <stdio.h>
#define MAXLINE 1000

int getLine(char string[], int limit);

int main(){
    int length, max=80;
    char line[MAXLINE];

    while((length = getLine(line, MAXLINE)) > 0)
        if(length > max){
            printf("%s", line);
        }
    return 0;

}

int getLine(char string[], int limit){
    int character, length;

    for(length=0; length<limit-1 && (character=getchar()) != EOF && character != '\n'; ++length)
        string[length] = character;
    if(character == '\n'){
        string[length] = character;
        ++length;
    }
    string[length] = '\0';
    return length;
}