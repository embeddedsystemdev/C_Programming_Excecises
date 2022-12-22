#include <stdio.h>


int main() {

    int number, n;

    printf("Number:\n");
    scanf("%d",&number);

    for(int i=0; i<8*sizeof(typeof(number)); i++){

        if(number & (1<<i)) {
            n=i;
            break;
        }
    }

    printf("Lowest set bit of %d is %d",number,n);


    return 0;
}