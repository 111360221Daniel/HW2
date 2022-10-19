#include <stdio.h>
int main()
{
	float a, b;
	while (1) {

		printf("Enter sales in dollar(-1 to end):");
		scanf("%f", &a);
		if (a == -1)
			break;
		b = 0.09*a+200;
		printf("salary is: $");
	    printf("%7.2f\n\n",b);
       }
    return 0;
	
}