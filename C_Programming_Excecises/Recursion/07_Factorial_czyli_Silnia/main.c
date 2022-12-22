#include <stdio.h>

int factorial(int input);

int main(int argc, char* argv[]) {

    int input=0;
    printf("Welcome in factorial program, please provide your number:\n");
    scanf("%d",&input);

    printf("%d! = %d\n", input, factorial(input));

    return 0;
}

int factorial(int input) {

    if( input < 0) {
        printf("Input should be greater than 0 ;/\n");
        return -1;  
    }

    if( input==0 ) {
        return 1;
    }

    return input * factorial(input-1); 

}