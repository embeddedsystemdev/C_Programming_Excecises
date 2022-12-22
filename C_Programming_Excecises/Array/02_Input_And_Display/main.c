#include <stdio.h>
#include <stdlib.h>

#define PROGRAM_FAIL    -1


int main(int argc, char* argv[]) {

    int size=0;
    int* array_ptr=NULL;

    printf("Please provide size of array:\n");
    scanf("%d",&size);
    
    array_ptr = malloc(sizeof(int)*size);

    if(!array_ptr) {
        printf("Allocation of memory FAILED!\n");
        return PROGRAM_FAIL;
    }

    for(int i=0;i<size;i++) {
        printf("provide element:\n");
        scanf("%d",&array_ptr[i]);
    }

    printf("All elements of array are provided and displayed below...\n");
    printf("=========================================\n");

    for(int i=0; i<size; i++) {
        printf("%d ",array_ptr[i]);
    }

    return 0;
}