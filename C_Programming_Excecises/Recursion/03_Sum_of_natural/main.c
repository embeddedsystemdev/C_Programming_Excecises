#include <stdio.h>

int countSumOfNaturalNumbers(unsigned int lower, unsigned int upper);

int main(int argc, char* argv[]) {

    int lower, upper = 0;
    printf("Provide lower and upper limit:\n");
    scanf("%d %d",&lower, &upper);

    printf("Sum of all natural numbers between %d and %d is %d\n", lower, upper, countSumOfNaturalNumbers(lower, upper));



    return 0;
}

int countSumOfNaturalNumbers(unsigned int lower, unsigned int upper) {

    if(lower>=upper) {
        return upper;
    }

    return lower + countSumOfNaturalNumbers(lower+1, upper);
}
