#include <stdio.h>
#include <stdlib.h>


int sum_array(int* ptr, size_t size) {

    if(size == 0) {
        return *ptr;
    }

    return *ptr + sum_array(++ptr, size-1);

}


int main() {

    int size = 0;
    int* array_ptr = NULL;

    printf("Please provide size of array\n");
    scanf("%d",&size);

    if(size <= 0) {
        printf("Bad input of size\n");
        return -1;
    }

    array_ptr = malloc(size*sizeof(int));
    for(int i=0;i<size;i++) {
        scanf("%d",&array_ptr[i]);
    }

    for(int j=0;j<size;j++) {
        printf("%d ",array_ptr[j]);
    }

    printf("Sum of elements in array is %d\n", sum_array(array_ptr, size));

    free(array_ptr);
    return 0;
}