#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a = 5, b =6, c;
	c = --a + b--;
	// a = 6, c = 12, b =7
//	printf("%d", &c);
	printf("a la: %d \n ", a);
	printf("b la: %d \n ", b);
	printf("c la: %d \n ", c);
	return 0;
}

