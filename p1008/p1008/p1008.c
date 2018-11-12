#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int a[10];//每位数
int gw;
void cf(int x)
{
	while (x != 0) {
		gw = x % 10;
		x = x / 10; 
		a[gw]++;
	}
}



int main()
{
	memset(a, 0, sizeof(a));
	int i, j, k;//循环
	int b;
	
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			for (k = 1; k <= 9; k++)
			{
				b = i * 100 + j * 10 + k;
				cf(b);
				cf(b * 2);
				cf(b * 3);
				if ((a[1] == 1) && (a[2] == 1) && (a[3] == 1) && (a[4] == 1) && (a[5] == 1) && (a[6] == 1) && (a[7] == 1) && (a[8] == 1) && (a[9] == 1)  )
				{
					printf("%d %d %d\n", b, b * 2, b * 3);
				}
				for (int e = 1; e <= 9; e++) 
				{
					a[e] = 0;
				}
			}
		}
	}
	system("pause");
	return 0;
}