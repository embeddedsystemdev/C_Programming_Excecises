#include <stdio.h>


/* Euclidean algorithm */
int gcd(int a, int b)
{
    if(b == 0)
        return a;
    else
        return gcd(b, a%b); 
}

int lcm(int a, int b) {
    return (a*b)/gcd(a,b);
}


int main() {

    int num1 = 0;
    int num2 = 0;
    printf("Welcome in LCM programm, please provide two numbers:\n");

    scanf("%d %d",&num1, &num2);

    printf("Least common multiplication is %d\n", lcm(num1,num2));

    return 0;
}