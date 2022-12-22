#include <stdio.h>

void printEvenNumbers(int lower, int upper) {

    for (int i=lower; i<=upper; i++) {
        if(i%2==0) {
            printf("%d ",i);
        }
    }

}

void recursivePrintEvenNumbers(int lower, int upper) {

    if(lower%2==0) {
        printf("%d ", lower);
    }

    if(lower>=upper) {
        printf("\n");
        return;
    }

    recursivePrintEvenNumbers(lower+1, upper);

}

int main(int argc, char* argv[]) {

    printf("Welcome in program for displaying even numbers\n\
Please provide lower and upper limit:\n");

    int lower, upper=0;
    scanf("%d %d",&lower, &upper);

    printf("Even numbers between %d and %d are:\n", lower, upper);

    // printEvenNumbers(lower, upper);

    recursivePrintEvenNumbers(lower, upper);

    return 0;
}