#include <stdio.h>
//��Ҫ�����ƶ�n ��Ӧ�ƶѵı��Ϊa[n] ֽ������Ϊx  �ƶ�����k

int main()
{
	int  j, i, n;//jΪÿ�������շֵĽ����iΪѭ����
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

