#include <stdio.h>
//Declaration
void printHello();

void printHi(){
    printf("Hi !!!\n");
}

int sumOfDigits(int n){
    if(n==0){
        return 0;
    }
    int sumN = n%10 + sumOfDigits(n/10);
    return sumN;
}

int sum(int n){
    if(n==0){
        return 0;
    }
    int sumN = sum(n-1) + n;
    return sumN;
}
int fact(int n){
    if(n<=0){
        return 1;
    }
    int fac = fact(n-1)*n;
    return fac;
}

int main(){
    // printHello();
    // printHi();
    // printf("%d \n",4==4);
    // for(int i=0; i<=10; i++){
    //     printf("%d \n",i);
    // }
    // printf("%d\n",sum(10));
    // printf("%d",fact(5));
    printf("%d",sumOfDigits(123567));
    return 0;
}

void printHello(){
    printf("Hello!\n");
}

/*
There is no true and false in C
Only 0 and 1

*/

/*
if and else are same as cpp
loops are also same as in cpp
functions are also same as in cpp
*/



