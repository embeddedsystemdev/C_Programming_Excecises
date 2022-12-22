#include <stdio.h>


int main(int argc, char* argv[]) {
	
	int number=0;
	printf("Welcome in odd even program\nWhat number would you like to check?\n");
	scanf("%d",&number);

	if(number%2==1) {
		printf("Number is odd\n");
	}
	else {
		printf("Number is even\n");
	}


	return 0;
}
