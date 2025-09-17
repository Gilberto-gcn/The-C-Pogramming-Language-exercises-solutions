/*Revise the main routine of the longest-line program so it will correcly print the lenght of arbitrarily long input lines, and as much as possible of the text*/

#include <stdio.h>
#define MAXLINE 1000

int getLine(char string[], int limit);
void copy(char to[], char from[]);

int main(){
    int length, max=0;
    char line[MAXLINE], longest[MAXLINE];

    while((length = getLine(line, MAXLINE)) > 0)
        if(length > max){
            max = length;
            copy(longest, line);
        }
    if(max>0)
    printf("\nlength: (%d)\n%s",max, longest);
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

void copy(char to[], char from[]){
    int i=0;
    
    while((to[i] = from[i]) != '\0')
        ++i;
}