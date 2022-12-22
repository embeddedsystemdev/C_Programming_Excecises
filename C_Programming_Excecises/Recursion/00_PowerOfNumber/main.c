#include <stdio.h>

int powerOfNum(int number, int power) {

    if(power==0) {
        return 1;
    }
    else if(power==1) {
        return number;
    }

    return number*powerOfNum(number,power-1);
}


int main(int argc, char* argv[]) {

    int number=0, power=0;
    printf("Provide number\n");
    scanf("%d",&number);
    printf("Provide power\n");
    scanf("%d", &power);

    printf("Result:%d\n",powerOfNum(number, power));
    
    return 0;
}