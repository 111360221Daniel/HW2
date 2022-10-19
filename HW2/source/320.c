#include <stdio.h>

int main()
{
	int h;
	float hr,s;
	while (1) {
	  printf("Enter # of hours worked (-1 to end):");
	  scanf("%d", &h);
	  if (h == -1)
		  break;
	  printf("Enter hourly rate of worker ($00.00) :");
	  scanf("%f", &hr);
	  if (h > 40)
		  s = (h - 40)*1.5*hr + hr * 40;
	  else{
		  s = h * hr;
       }
	  printf("Salary is $");
	  printf("%7.2f\n\n",s);
    }
	return 0;
}