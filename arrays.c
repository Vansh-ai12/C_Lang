//Arrays

#include<stdio.h>

int main(){

    int marks[] = {97,98,99};
    int arr[3];
    printf("Enter the numbers in arr \n");
    for(int i=0; i<3; i++){
        scanf("%d",&arr[i]);
    }
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    return 0;
}

/*
if a pointer is declared of any type like


int age = 22;
int* ptr = age;

ptr++;

this ++ operation increases acc to datatype of age and ptr

we can also substract two pointers 
and also pointer -- as well

*/

/*

int* ptr = &arr[0];

int* ptr = arr

both are same syntatically , points to start of array
Also , if we increement a pointer by 1 regularly it will traverse the array


*/


//Method to pass an array
/*

void printNumbers(int arr[],int n)
OR
void printNumbers(int *arr, int n)


Function call;
printNumbers(arr,n);

*/