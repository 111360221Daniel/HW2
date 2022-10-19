#include <stdio.h>
#include <math.h>
int main()
{
	int a = 5000;
	int i,j;
	float b,c,d,e;

	for(i = 1; i <=15;i++){
		printf("²Ä");
		printf("%d",i);
		printf("¦~ ");
		
			d = 0.10 + 0.005*(i-1);
			e = d * 100;
		    b =pow((1+d),i) ;
		    c = b*5000;
			if (i <= 9) {
				printf(" ");
				printf("%7.1f", e);
				printf("%% ");
				printf("%7.5f\n\n", c);

			}
			else
			{
              printf("%7.1f", e);
			  printf("%% ");
              printf("%7.5f\n\n",c);
			}
		
	}
	return 0;
}