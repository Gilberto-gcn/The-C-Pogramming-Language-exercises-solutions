/*Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blanks lines*/

#include <stdio.h>
#define MAXLINE 1000

int getLine(char string[], int limit);

int main(){
    char line[MAXLINE];

    while(getLine(line, MAXLINE) > 0)
        printf("%s", line);
    return 0;

}

int getLine(char string[], int limit){
    int character, length;

    for(length=0; length<limit-1 && (character=getchar()) != EOF && character != '\n'; ++length){
        if(character==' ' || character=='\t')
            continue;
        string[length] = character;
    }
    if(character == '\n'){
        string[length] = character;
        ++length;
    }
    string[length] = '\0';
    return length;
}