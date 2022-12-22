#include <stdio.h>

int main (int argc, char* argv[]) {

int number;
printf("Please write intiger number:\n");
scanf("%d", &number);

if(number&1) {
    printf("Last bit was 1\n");
}
else {
    printf("Last bit was 0\n");
}



    return 0;
}