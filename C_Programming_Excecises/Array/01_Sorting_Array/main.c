#include <stdio.h>
#include <stdlib.h>

void sortArrayAscending(int* array_ptr, int size) {

    int smallest_idx=0;
    int tmp=0;
    for(int j=0;j<size;j++) {
        smallest_idx=j;

        for( int i=smallest_idx+1; i<size; i++ ) {
            if(array_ptr[i] < array_ptr[smallest_idx]) {
                smallest_idx=i;
            }
        }
        tmp=array_ptr[j];
        array_ptr[j]=array_ptr[smallest_idx];
        array_ptr[smallest_idx]=tmp;
    }
    

}


int main() {

    int size=0;
    printf("Provide size of array\n");
    scanf("%d",&size);

    if(size<=0) {
        printf("Bad size\n");
        return -1;
    }

    int* array_ptr = malloc(sizeof(int)*size);
    for( int i=0; i<size; i++) {
        scanf("%d",&array_ptr[i]);
    }

    sortArrayAscending(array_ptr, size);

    for(int i=0; i<size; i++) {
        printf("%d ", array_ptr[i]);
    }

    free(array_ptr);

    return 0;
}