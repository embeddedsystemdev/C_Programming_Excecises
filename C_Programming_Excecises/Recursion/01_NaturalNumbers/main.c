#include <stdio.h>

void printNumber(unsigned int number) {

    if(number == 1) {
        printf("\n%d",number);
        return;
    }
    printNumber(number-1);
    printf(" %d",number);
}

int main(int argc, char* argv[]) {

    unsigned const int first=1;
    unsigned int last=0;

    printf("Welcome in natural numbers printer. Please provide  upper limit\n");
    // printf("Lower: ");
    // scanf("%d",&first);
    printf("Upper: ");
    scanf("%d",&last);
    printNumber(last);


    return 0;
}