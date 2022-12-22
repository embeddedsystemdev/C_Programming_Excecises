#include <stdio.h>

int main(int argc, char* argv[]) {

    int number,n;
    printf("Provide number\n");
    scanf("%d", &number);
    printf("Which bit you need to set?\n");
    scanf("%d", &n);

    number |= (1<<n);
    printf("Result number is %d\n", number);
    
    return 0;
}