#include <stdio.h>


int sumOfDigits(int input) {

    if(input < 0) {
        input*=-1;
    } 

    if(input == 0) {
        return 0;
    }

    return sumOfDigits(input/10) + input%10;
}

int main(int argc, char* argv[]) {

    printf("Welcome in sum of digits, please provide number which digits will be summed up\n");
    int input_num=0;

    scanf("%d",&input_num);
    printf("Sum of digits from %d is %d\n",input_num, sumOfDigits(input_num));

    return 0;
}