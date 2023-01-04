#include <stdio.h>
#include <stdlib.h>

int main() {

    int size=0;
    printf("Provide size\n");
    scanf("%d",&size);

    int* arr_ptr = malloc(sizeof(int)*size);

    for(int i=0;i<size;i++) {
        printf("provide element:\n");
        scanf("%d",&arr_ptr[i]);
    }

    for(int i=0; i<size; i++) {
        printf("%d ",arr_ptr[i]);
    }

    int pos=0;
    printf("\nIn which position would you like to insert number?\n");
    scanf("%d",&pos);

    int input_num=0;
    printf("What is the number?\n");
    scanf("%d",&input_num);

    int* arr_ptr2 = malloc(sizeof(int)*(size+1));

    int tmp=0;
    for(int i=0; i<size+1; i++) {
        if(i==pos) {
            arr_ptr2[i]=input_num;
            tmp+=1;
        }
            
        else {
            arr_ptr2[i]=arr_ptr[i-tmp];
        }
    }

    free (arr_ptr);

       for(int i=0; i<size+1; i++) {
        printf("%d ",arr_ptr2[i]);
    }


    return 0;
}