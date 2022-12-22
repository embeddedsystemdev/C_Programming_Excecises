#include <stdio.h>

int main(int argc, char** argv) {

    int number, n;

    printf("Insert your number\n");
    scanf("%d",&number);
    printf("Which bit you want to clear?\n");
    scanf("%d",&n);

    number=number & ~(1<<n);
    printf("Result: %d\n",number);

    return 0;
}