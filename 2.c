#include<stdio.h>

int main()
{
	double p;
	double sum;
	printf("请输入月利润：\n");
	scanf("%lf", &p);
	if (p <= 100000)
	{
		sum = p * 0.1;
		printf("%lf\n", sum);
	}
	else if (100000 < p <= 200000)
	{
		sum = 100000 * 0.1 + (p - 100000) * 0.075;
		printf("%lf\n", sum);
	}
	else if (200000 < p <= 400000)
	{
		sum = 100000 * (0.1+0.075) + (p - 200000) * 0.05;
		printf("%lf\n", sum);
	}
	else if (400000 < p <= 600000)
	{
		sum = 100000 * (0.1 +0.075)+200000*0.05+(p - 400000) * 0.03;
		printf("%lf\n", sum);
	}
	else if (600000 < p <= 1000000)
	{
		sum = 100000 * 0.175 + 200000*0.08+(p - 600000) * 0.015;
		printf("%lf\n", sum);
	}
	else if (p>=1000000 )
	{
		sum = 100000 * 0.175 +200000*0.08+40*0.015+ (p - 1000000) * 0.001;
		printf("%lf\n", sum);
	}
	return 0;
}
