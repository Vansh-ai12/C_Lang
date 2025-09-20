//A variable that stores the memory address of another variable

#include<stdio.h>

// pass by  reference 
void square(int *n){
    *n = (*n)*(*n);
    printf("The Sqaure of number is %d\n",*n);
}

int main(){
    // int age = 22;
    // int* ptr = &age;
    // int _age = *ptr;
    // printf("%p\n",&age);
    // printf("%p\n",ptr);
    // printf("%p\n",&ptr);
    // printf("%d\n",_age);//*ptr the value at ptr *
    // printf("%u\n",&age);
    // printf("%u\n",&ptr);
    int n = 4;
    square(&n);
    printf("The number now is %d\n",n);
    return 0;
}

/*
*-> value at address
&-> addres of variable

%p is the format specifier to print address of pointer kinda
%u is to modify it and look better(unsigned int)

*/

