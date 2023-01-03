#include <stdio.h>
#include <stdlib.h>


void print_array_int(const int* arr_ptr, const int size) {

    if(!arr_ptr) {
        return;
    }

    printf("[ ");
    for( int i=0; i<size;i++) {
        printf("%d ",arr_ptr[i]);
    }
    printf("]\n");

}


void copy_array_int(const int* arr1, int** arr2, const int size) {
    if(!arr1) {
        printf("cant copu from NULL array\n");
        return;
    }

    *arr2 = malloc(sizeof(int)*size);

    if(!*arr2) {
        printf("Memory allocation for arr2 failed!\n");
        return;
    }

    for(int i=0; i<size; i++) {
        (*arr2)[i]=arr1[i];
    }

}


int main(int argc, char* argv[]) {

    int size=0;
    int* arr_ptr1=NULL;
    int* arr_ptr2=NULL;
    printf("Please provide size of array and then insert all elements:\n");

    scanf("%d",&size);

    if(size<=0) {
        printf("Incorrect input \"size\"\n");
        return -1;
    }

    arr_ptr1 = malloc(sizeof(int)*size);

    if(!arr_ptr1) {
        printf("Allocation of array1 failed!\n");
        return -2;
    }


    for(int i=0; i<size;i++){
        scanf("%d",&arr_ptr1[i]);
    }
    print_array_int(arr_ptr1,size);
    printf("And now copying\n");

    copy_array_int(arr_ptr1, &arr_ptr2, size);
    print_array_int(arr_ptr2,size);

    free(arr_ptr1);
    free(arr_ptr2);
    return 0;
}