#include <stdio.h>

int main()
{
	while (1)
	{
		float p, r, d, i;
		printf("Enter loan principal(-1 to end): ");
		scanf("%f", &p);
		if (p == -1)
			break;
		printf("Enter interest rate: ");
		scanf("%f", &r);
		printf("Enter term of the loan in days: ");
		scanf("%f", &d);
		i = p * r*d / 365;
		printf("The interest charge is $: ");
		printf("%7.2f\n\n",i);
	}

	return 0;
}