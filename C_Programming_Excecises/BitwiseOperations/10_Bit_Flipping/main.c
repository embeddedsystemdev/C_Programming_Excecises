#include <stdio.h>

int main() {

    int number;
    printf("Provide number to bitflipping\n");
    scanf("%d",&number);

    number=~number;

    printf("Flipped number is %d",number);

    return 0;
}