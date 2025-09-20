/*

\n -> newline or next line
\t -> tab
\0-> null char

*/


//To access special properties or functions of strings we should add \O in this char array
#include<stdio.h>
#include<string.h>
int main(){
    char name[] = {'S','H','R','A','D','H','A','\0'};
    char name2[] = "Vansh";

    char name3[100];
    // gets(name3); Dangerous and outdated
    fgets(name3,100,stdin);
    puts(name3);
    int length = strlen(name3);
    printf("%d\n",length);
    // printf("%s\n",name2);
    // printf("%s",name);
    return 0;
}

/*
scanf() can't take input if space came like "Vansh Jain"
so it will read only Vansh

fgets(str) inputs a string with spaces, puts(str) ouputs a string

*/

/*

Using pointers
char* str = "Hello World";


char str[] = "Hello World"
This cannot be reinitialised or changed ok

*/

/*

strcpy(newStr, oldStr)
This copies the oldStr in newStr

strcat(firstStr,secStr);
this concatenates first string with second
like final result is stored in first string only


strcmp(firstStr,secStr);
Compares 2 strings & returns a value

0-> string equal
positive-> first>second(ASCII)
negative-> first<second(ASCII)




*/