#include <stdio.h>

int main()
{
	int a;
	float h,d,w;
	float s,s2,s3;
	printf("請輸入薪資代碼(1 經理、2 時薪工、3 抽佣金、4 零工):");
	scanf("%d", &a);
	switch (a) {
	case 1:
		s = 1000;
		printf("週薪 = %.2f",s);
		
		break;
	case 2:
		printf("請輸入本週工作時數:");
		scanf("%f", &h);
		printf("請輸入時薪:");
		scanf("%f", &s2);
		if (h > 40) {
			s = 40 * s2 + (h - 40)*1.5*s2;
		}
		else
		{
			s = (h * s2);
		}
		printf("週薪 = %7.2f", s);
		break;
	case 3:
		printf("請輸入當週銷售金額:");
		scanf("%f", &s3);
		s = 250 + s3 * 0.057;
		printf("週薪 = %7.2f", s);
		break;
	case 4:
		printf("請輸入當週所生產的件數:");
		scanf("%f", &d);
		printf("請輸入生產一件的薪資:");
		scanf("%f", &w);
		s = d *w ;
		printf("週薪 = %7.2f", s);
		break;
	default:
		printf("錯誤");
		break;
	
	}

	return 0;
}