#include <stdio.h>

int reversing(int input_number);

int main(int argc, char* argv[]) {

    int input_number=0;
    printf("Welcome in reversing numbers programm \nPlease write what integral number would you like to reverse:\n");
    scanf("%d",&input_number);

    printf("reversing %d ...\n",input_number);
    printf("Result: %d\n", reversing(input_number));

    return 0;
}

int reversing(int input_number) {

    if(input_number%10==input_number) {
        return input_number;
    }

    int size=10;

    while(input_number%size != input_number) {
        size*=10;
    }
    int this_level_number=input_number%10;
    int output = reversing(input_number/10);


    return output+((size/10)*this_level_number);

}

