#include <stdio.h>
#include <stdint.h>

int main(int argc, char* argv[]) {

    int input_value;

    printf("Please put in an integer value:\n");
    scanf("%d", &input_value);

    if (input_value&(1<<((sizeof(uint8_t)*8)-1))) {
        printf("First bit is 1!\n");
    }
    else {
        printf("First bit is 0!\n");
    }
    return 0;
}