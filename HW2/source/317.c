#include <stdio.h>

int main()
{
	int an;
	float bb, tcg, tcr, cl,nb;
	while (1)
	{
      printf("Enter account number (-1 to end):");
	  scanf("%d", &an);
	  if (an == -1)
		  break;
	  printf("Enter beginning balance:");
	  scanf("%f", &bb);
	  printf("Enter total charges:");
	  scanf("%f", &tcg);
	  printf("Enter total credits:");
	  scanf("%f", &tcr);
	  printf("Enter credit limit:");
	  scanf("%f", &cl);
      nb = bb + tcg - tcr;
	 

	  if(nb>cl){
	  printf("account:\t");
	  printf("%d\n", an);

	  printf("credit limit:   ");
	  printf("%7.2f\n",cl);

	  printf("balance:\t");
	  printf("%7.2f\n", nb);
	  printf("Credit Limit Exceeded\n\n");
	  }
	  
	}
	

	return 0;
}