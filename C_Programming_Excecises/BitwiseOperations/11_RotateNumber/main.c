#include <stdio.h>
#include <stdbool.h>

#define BITSIZE_INT sizeof(int)*8
#define OLDEST_BIT_POSITION BITSIZE_INT-1
#define YOUNGEST_BIT_POSITION   0

#define SETBIT(number,bit);     number|=(1<<bit);
#define CLRBIT(number,bit);     number&=~(1<<bit);


int main() {
    int number=0;
    int rotation_number=0;
    int temp=0;
    bool last_bit=0;

    printf("What number you would like to rotate?\n");
    scanf("%d",&number);

    printf("How many rotations would you like to make?\n");
    scanf("%d",&rotation_number);

    temp=number;
    printf("First we're gonna rotate right\n");

    for(int i=0; i<rotation_number;i++) {
        last_bit = temp & 1;
        temp>>=1;
        if(last_bit) {
            SETBIT(temp,OLDEST_BIT_POSITION);
        }
        else {
            CLRBIT(temp,OLDEST_BIT_POSITION);
        }

    }
    printf("After rotating %d, %d times into right we've got %d\n",number, rotation_number, temp);

    printf("=================================================\n");
    
    printf("Now we're gonna rotate left\n");
    temp=number;
    for(int i=0; i<rotation_number;i++) {
        last_bit = temp & (1<<OLDEST_BIT_POSITION);
        temp<<=1;
        if(last_bit) {
            SETBIT(temp,YOUNGEST_BIT_POSITION);
        }
        else {
            CLRBIT(temp,YOUNGEST_BIT_POSITION);
        }

    }
    printf("After rotating %d, %d times into left we've got %d\n",number, rotation_number, temp);

    return 0;
}