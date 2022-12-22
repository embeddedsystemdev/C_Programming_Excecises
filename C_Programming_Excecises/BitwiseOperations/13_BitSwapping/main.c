#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define BIT_SIZE	sizeof(int)*8

int main(int argc, char* argv[]) {

	int num1=0;
	int num2=0;

	if(argc<3) {
		printf("To few arguments passed to program\n");
		return -1;
	}
	num1=atoi(argv[1]);
	num2=atoi(argv[2]);
	printf("You inserted %d and %d\n",num1, num2);

	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num1 ^ num2;

	printf("Swapped with xors %d and %d\n",num1, num2);

return 0;

}
