#include <stdio.h>

int main()
{
	int i, j, k;
	for (i = 1; i <= 10; i++) {
		for (j = 1; j <= i; j++) {
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("\n");
	for (i = 10; i >= 1; i--) {
		for (j = 1; j <= i; j++) {
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("\n");
	for (i = 1; i <= 10; i++) {
		for (j = 2; j <= i; j++) {
			printf("%s", " ");
		}
		for (j = 10; j >= i; j--) {
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("\n");
	for (i = 10; i >= 1; i--) {
		for (j = 2; j <= i; j++) {
			printf("%s", " ");
		}
		for (j = 10; j >= i; j--) {
			printf("%s", "*");
		}
		printf("\n");
	}



		return 0;
	}

