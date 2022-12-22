#include <stdio.h>
#include <stdlib.h>

int* createArray(int size) {

    int* ptr = NULL;

    if(size<=0) {
        printf("Size <= 0, that is an error!\n");
        return NULL;
    }

    ptr=malloc(sizeof(int)*size);

    if(!ptr) {
        printf("Memory allocation failed\n");
        return NULL;
    }


    for( int i=0; i<size; i++) {
        printf("insert element:");
        scanf("%d",&ptr[i]);
    }

    return ptr;
}

void printArray(int* ptr, int size) {

    if(!ptr) {
        printf("Array ptr is NULL ptr!!!\n");
        return;
    }
    printf("\n[ ");
    for (int i=0;i<size;i++) {
        printf("%d ",ptr[i]);
    }
    printf(" ]\n");
    return;
}

long int sumArray(int* ptr, int size) {
    int sum=0;
    for(int i=0;i<size;i++) {
        sum+=ptr[i];
    }
    return sum;
}


int main() {

    int* array_ptr=NULL;
    int array_size=0;
    printf("Please provide size of array:\n");
    scanf("%d",&array_size);
    array_ptr = createArray(array_size);
    printArray(array_ptr,array_size);
    printf("Sum of all elements from this array is %ld\n",sumArray(array_ptr,array_size));   

    return 0;
}