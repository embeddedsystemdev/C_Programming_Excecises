#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPalindrome(int input_num);

int main(int argc, char* argv[]) {

    printf("Welcome in palindrome check programm, please provide number:\n");
    int input_num = 0;

    scanf("%d", &input_num);

    isPalindrome(input_num) ? printf("It is a palindrome\n") : printf("It is NOT a palindrome\n");



    return 0;
}

bool isPalindrome(int input_num) {

    if(input_num == 0) {
        return true;
    }

    if(input_num < 0) {
        input_num*=-1;
    }

    unsigned int divider = pow(10,(int)log10(input_num));
    printf("divider %d ",divider);
    if (input_num%10 == input_num / divider) {
        printf("ok\n");
        return isPalindrome((input_num%divider)/10);
    }
    printf("NOT_OK");

    return false;

}