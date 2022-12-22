#include <stdio.h>

#define BYTE_SIZE   8

int main() {

    int number,n;

    printf("Podaj liczbe\n");
    scanf("%d",&number);

    for (int i=BYTE_SIZE*sizeof(typeof(number))-1; i>=0; i--) {

        if(number & (1<<i)) {
            n=i;
            break;
        }


    }

    printf("Highest set bit in number %d is %d\n",number, n);
    
    return 0;
}