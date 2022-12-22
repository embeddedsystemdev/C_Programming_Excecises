#include <stdio.h>

#define INT_BIT_SIZE    (sizeof(int)*8)

int checkLeadZeros(int number) {
    int cnt=0;
    for(int i=INT_BIT_SIZE-1;i>=0;i--) {
        if( number & (1<<i)) {
            break;
        }
        cnt++;
    }
    return cnt;
}

int checkTrailingZeros(int number) {
    int cnt=0;
    for (int i=0; i<INT_BIT_SIZE;i++) {
        if(number & (1<<i)) {
            break;
        }
        cnt++;
    }
    return cnt;
}

int main(int argc, char* argv[]) {

    printf("What number you want to check?\n");
    int number, lead_count, trail_count;
    scanf("%d",&number);

    printf("Your number %d has %d leading zeros and %d trailing zeros\n",number, checkLeadZeros(number),checkTrailingZeros(number));

    return 0;
}