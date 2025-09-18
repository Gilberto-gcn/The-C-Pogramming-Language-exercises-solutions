#include <stdio.h>
#define MAXLINE 1000
#define TAB_SIZE 10

int getLine(char string[], int limit);

int main(){
    int length, position=1;
    char line[MAXLINE];

    while((length = getLine(line, MAXLINE)) > 0){
        position = 1;
        for(int i=0; i<length; ++i){
            if(line[i] != '\t'){
                putchar(line[i]);
                ++position;
            }
            else{
                for(int j=0; j<=(TAB_SIZE-position); j++)
                    putchar(' ');
                position = 1;
            }
        }
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