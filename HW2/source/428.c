#include <stdio.h>

int main()
{
	int a;
	float h,d,w;
	float s,s2,s3;
	printf("�п�J�~��N�X(1 �g�z�B2 ���~�u�B3 ������B4 �s�u):");
	scanf("%d", &a);
	switch (a) {
	case 1:
		s = 1000;
		printf("�g�~ = %.2f",s);
		
		break;
	case 2:
		printf("�п�J���g�u�@�ɼ�:");
		scanf("%f", &h);
		printf("�п�J���~:");
		scanf("%f", &s2);
		if (h > 40) {
			s = 40 * s2 + (h - 40)*1.5*s2;
		}
		else
		{
			s = (h * s2);
		}
		printf("�g�~ = %7.2f", s);
		break;
	case 3:
		printf("�п�J��g�P����B:");
		scanf("%f", &s3);
		s = 250 + s3 * 0.057;
		printf("�g�~ = %7.2f", s);
		break;
	case 4:
		printf("�п�J��g�ҥͲ������:");
		scanf("%f", &d);
		printf("�п�J�Ͳ��@���~��:");
		scanf("%f", &w);
		s = d *w ;
		printf("�g�~ = %7.2f", s);
		break;
	default:
		printf("���~");
		break;
	
	}

	return 0;
}