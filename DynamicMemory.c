/*
It is a way to allocate memory to a data structure during the runtime

*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    // printf("%d\n",sizeof(int));
    // printf("%d\n",sizeof(float));
    // printf("%d\n",sizeof(char));

    int *ptr;

    ptr = (int*)malloc(5*sizeof(int));

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    for(int i=0; i<5; i++){
        printf("%d\n",ptr[i]);
    }
    ptr =(int*) realloc(ptr,3*sizeof(int));
    ptr[0] = 1;
    ptr[1]=2;
    ptr[2] = 3;
    for(int i=0; i<3; i++){
        printf("%d\n",ptr[i]);
    }

    free(ptr);
    return 0;
}

/*

1)malloc() -> memory allocation
2)calloc() -> continous allocation
3)free()
4)realloc() -> reallocation

*/

/*
malloc() takes number of bytes to be allocated & returns
a pointer of type void.

calloc() initialises with 0 like by default 0 is stored and is continous allocation
int *ptr;
ptr = (int*)calloc(5,sizeof(int))
in calloc() we dont send the number of byted but
no. allocations,per memory allocation size

free() We use it to free memory that is allocated using malloc & calloc


realloc() reallocate(increase or decrease) memory using the
same pointer and size.
int *ptr;
ptr = realloc(ptr,newSize);
*/