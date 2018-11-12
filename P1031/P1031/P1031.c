#include <stdio.h>
//需要定义牌堆n 对应牌堆的编号为a[n] 纸牌总数为x  移动次数k

int main()
{
	int  j, i, n;//j为每副牌最终分的结果，i为循环用
	int x = 0; int k = 0; int a[100];
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		x = x + a[i];
	}
	j = x / n;
	for (i = 0; i < n; i++)
	{
		if (a[i] != j)
		{
			a[i] = a[i] - j;
			a[i + 1] = a[i + 1] + a[i];
			a[i] = j;
			k ++;
		}

	}

	printf("%d", k);
	return 0;
}

