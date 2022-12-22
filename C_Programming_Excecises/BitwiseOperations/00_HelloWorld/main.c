#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

	if(argc<2) {
		printf("You got to little arguments here :(\r\n");
		return -1;
	}

	int number=atoi(argv[1]);
	printf("This program called %s prints hello world %d times!\r\n", argv[0], number);
	
	for(int i=0; i<number; i++) {
	printf("Hello world\r\n");
	}

	return 0;

}
