#include <stdio.h>

int main() {

	int x,i;

	printf("Provide number:\n");
	scanf("%d",&x);
	printf("Provide bit number:\n");
	scanf("%d",&i);

	x=x^(1<<i);

	printf("Result: %d\n",x);

return 0;
}
