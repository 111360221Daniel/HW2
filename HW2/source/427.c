#include <stdio.h>

int main()
{
	int a, b, c;
	for (a = 1; a <= 500; a++) {
		for (b = 1; b <= a; b++) {
			for (c = 1; c <= 500; c++) {
				if (c*c == a * a + b * b) {

                   printf("%d\t%d\t%d\n",b,a,c);

				}
			}
		}
	}
	

	return 0;
}