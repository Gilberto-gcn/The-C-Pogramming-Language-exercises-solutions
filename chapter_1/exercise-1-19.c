/*Write a function reverse(s) that reverses the character string s. Use it to write a program that reverses ist input a line at time*/

#include <stdio.h>
#define MAXLINE 1000

int getLine(char string[], int limit);
void reverseLine(char string[],int length);
void copy(char to[], char from[]);

int main(){
    int length;
    char line[MAXLINE];

    while((length = getLine(line, MAXLINE)) > 0)
        reverseLine(line, length);
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

void reverseLine(char string[],int length){
    int i, j=0;
    char reverse[length];

    copy(reverse, string);

    //Actual code thate inverts the string
    for(i = length-1; i>=0; --i) {
        reverse[j] = string[i];
        ++j;
    }
   reverse[length] = '\0';

   printf("\n%s\n", reverse);
}

void copy(char to[], char from[]){
    int i=0;
    
    while((to[i] = from[i]) != '\0')
        ++i;
}