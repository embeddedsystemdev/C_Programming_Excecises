#include <stdio.h>

#define INT_BIT_SIZE sizeof(int)*8

int main() {
    int number=0;
    printf("What number would you like to see in bin format?\n");
    scanf("%d",&number);
    printf("Bin format:\n");
    for(int i=1;i<=INT_BIT_SIZE;i++) {
        printf("%d",(number & (1<<(INT_BIT_SIZE-i)) ? 1 : 0 ));
    }
    printf("\n");

    return 0;
}