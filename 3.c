#include<stdio.h>

int main()
{
	int i, j, k,max;
	printf("请输入三个数;\n");
	scanf("%d%d%d", &i,& j, & k);
	if (i >=j)
	{
		max = i;
		if (i >=k)
		{
			max = i;
			printf("最大为：%d\n", max);
		}
		else if (i < k)
		{
			max = k;
			printf("最大为：%d\n", max);
		}
	}
	if (i < j)
	{
		max = j;
		if (j >= k)
		{
			max = j;
			printf("最大为：%d\n", max);
		}
		else if (j< k)
		{
			max = k;
			printf("最大为：%d\n", max);
		}
	}
	return max;
}
