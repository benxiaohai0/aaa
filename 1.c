#include<stdio.h>

int main()
{
	int i, j, k;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			for (k = 0; k < 5; k++)
				if (i != j && i != k && j != k)
					printf("%d%d%d\n", i, j, k);
	return 0;
}
