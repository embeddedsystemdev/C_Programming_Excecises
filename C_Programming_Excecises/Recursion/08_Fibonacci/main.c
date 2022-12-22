#include <stdio.h>
#include <stdlib.h>



int fibonacci(int n) {

    if( n < 0 ) {
        printf("Incorrect input for fibonacci\n");
        return -1;
    }

    if(n==0) return 0;

    if(n==1) return 1;

    return fibonacci(n-1)+fibonacci(n-2);

}


int main(int argc, char* argv[]) {

    int input = 0;
    if( argc > 1 ) {
        input=atoi(argv[1]);
    }
    else {
        printf("You've not provided argument for fibonacci function!\n");
        return -1;
    }

    printf("Fibbonacci(%d) = %d\n",input, fibonacci(input));


    return 0;
}