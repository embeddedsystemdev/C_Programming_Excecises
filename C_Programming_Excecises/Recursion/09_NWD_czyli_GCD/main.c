#include <stdio.h>


/* I found better algorythm so called Euclidean algorithm 
Function to find gcd using this algorithm is below:

copied from:
https://codeforwin.org/2016/03/c-program-to-find-gcd-of-two-numbers-using-recursion.html

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    else
        return gcd(b, a%b); 
}
*/

int greatest_common_divider(int num1, int num2) {

    printf("dividing %d and %d\n",num1, num2);
    if(num1 == 1 || num2 == 1) {
        return 1;
    }

    int div = 2;

    while( num1%div!=0 || num2%div!=0 ) {
        div++;

        if(div > num1 && div > num2) {
            return 1;
        }
    }

    return div * greatest_common_divider(num1/div, num2/div);
}


int main() {

    int num1 = 0;
    int num2 = 0;
    printf("Welcome in GCD programm, please provide two numbers:\n");

    scanf("%d %d",&num1, &num2);

    printf("Greatest common divider is %d\n", greatest_common_divider(num1,num2));

    return 0;
}
