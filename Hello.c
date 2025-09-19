#include<stdio.h>

//this is the first code


int main(){
    int age;
    printf("Enter Age");
    scanf("%d",&age);
    printf("Enter the name ");
    char name[20];
    scanf("%s",name);
    printf("The age is %d",age);
    printf("\n");
    printf("Name is : %s",name);

    return 0;
}
/*
In order to print in C

these are format specifiers

%d for integers
%f for real numbers
%c for characters 
*/


/*
To take input

scanf("%d", &age);

"format-specifier", pointer type variable for dynamic allocation

for strings to take input , 
char name[20];
scanf("%s",name);
printf("\n");
printf("Name is : %s",name);

*/



