#include <stdio.h>
#include <stdbool.h>


int main(int argc, char* argv[]) {

    int number=0;
    int n=0;

    printf("Please provide number\n");
    scanf("%d",&number);

    printf("Which bit would you like to check?\n");
    scanf("%d", &n);

    bool result = number&(1<<n);
    printf("%d-th bit is %d", n, result);


    return 0;
}