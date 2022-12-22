#include <stdio.h>
#include <stdlib.h>


int secondLargest(const int* array_ptr, const int size) {

    int largest=0;
    int sec_largest=0;

    for(int i=0;i<size;i++) {
        if(array_ptr[i]>largest) {
            sec_largest=largest;
            largest=array_ptr[i];
        }
        else if(array_ptr[i]>sec_largest) {
            sec_largest=array_ptr[i];
        }
    }
    return sec_largest;
}



int main() {

    int size=0;
    int* array_ptr=NULL;

    printf("What will be a size of an array?\n");
    scanf("%d",&size);

    if(size<=0) {
        printf("Bad size \n");
        return -1;
    }   

    array_ptr = malloc(sizeof(int)*size);

    if(!array_ptr) {
        printf("Memory allocation failed!\n");
        return -2;
    }

    for( int i=0; i<size; i++) {
        printf("next element:");
        scanf("%d",&array_ptr[i]);
    }

    printf("Second largest element is %d\n",secondLargest(array_ptr, size));

    return 0;
}