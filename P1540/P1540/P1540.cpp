#include <stdio.h>
//#include<stdlib.h>
#include<string.h>
int main()
{
	int i , j;
	int n[2];
	int m[1000];
	int sum = 0;
	int zd[1000]; memset(zd, -1, sizeof(zd));
	int flag = 1;
	int k = 0;
	for(i=0;i<2;i++)
	scanf("%d", &n[i]);
	

	for (i = 0; i < n[1]; i++)
		scanf("%d", &m[i]);//Â¼ÈëÊý¾Ý

	for (i = 0; i < n[1]; i++)
	{
		for (j = 0; j < n[0]; j++)
		{
			if (m[i] == zd[j])
				flag = 0;
		}

		if (flag) sum ++;
		
		if (k == n[0])
		{
			for (j = 0; j < k; j++)
			{
				zd[j] = zd[j + 1];
			}
			zd[k-1] = m[i];
		}
		else
			zd[k++] = m[i];
		flag = 1;
	}
	printf("%d", sum);
	//system("pause");
	return 0;
}