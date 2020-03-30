// Dynamic Memory Allocation in C/C++ :
// 1. malloc()    2. calloc()      3. realloc()    4. free()

#include<iostream>
using namespace std;
int main()
{
    // malloc(size) - takes 1 arg. i.e. size of the datatype
    // it creates the mentioned space in heap and returns a void pointer (base address) to the memory space
    int *p = (int*)malloc(sizeof(int));        // allocating space for only one integer(4-bytes)
    *p = 10;
    cout<<p<<" "<<*p<<endl;

    // free(var) - to deallocate/release the occupied memory 
    free(p);

    cout<<p<<" "<<*p<<endl;

    // calloc(n, size) - takes 2 args. i.e. no.of elements and size of datatype
    // it allocate the whole space for n elements in heap
    int *A = (int*)calloc(5, sizeof(int));
    cout<<A<<" "<<*A<<*(A+1)<<*(A+2)<<*(A+3)<<*(A+4)<<endl;
    for(int i=0;i<5;i++)
        A[i] = i+1;
    cout<<A<<" "<<*A<<*(A+1)<<*(A+2)<<*(A+3)<<*(A+4)<<endl;
    // difference between malloc and calloc are :
    // 1. malloc takes 1 arg, calloc takes 2 args
    // 2. malloc initialize space with garbage value and calloc initialize with '0' value
    free(A);
    cout<<A<<" "<<*A<<*(A+1)<<*(A+2)<<*(A+3)<<*(A+4)<<endl;

    // realloc(pointer, new_size) - to modify size of memory block(reducing/extending) size
    int *B = (int*)realloc(A, 2*5*sizeof(int));    // new mempry of 10 spaces copies A values into B
    cout<<B<<" "<<*B<<*(B+1)<<*(B+2)<<*(B+3)<<*(B+4)<<*(B+5)<<*(B+6)<<*(B+7)<<*(B+8)<<endl;
    free(B);
    cout<<B<<" "<<*B<<*(B+1)<<*(B+2)<<*(B+3)<<*(B+4)<<*(B+5)<<*(B+6)<<*(B+7)<<*(B+8)<<endl;

    return 0;
}