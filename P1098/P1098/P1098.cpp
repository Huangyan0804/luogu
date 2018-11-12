#include<stdio.h>
#include<stdlib.h>
int p[3];
int p1, p2, p3;
char a[100];
void sc(int c);
int main()
{
	int i,j;
	for (i = 0; i < 3; i++)
	{
		scanf_s("%d", &p[i]);
	}
	p1 = p[0]; p2 = p[1]; p3 = p[2];
	scanf_s("%s", a);
	if ((p1 >= 1 && p1 <= 3) && (p2 >= 1 && p2 <= 8) && (p3 >= 1 && p3 <= 2))
	{
		for (i = 0; i < 17; i++)
		{
			printf("%c", a[i]);
			if (a[i] == '-')
			{
				if (a[i + 1] - a[i - 1] > 1)
				{
					sc(i);
				}
				else
					printf("%c", a[i]);
			}
		}

	}
	system("pause");
	return 0;
}

void sc(int c)
{
	int  i,j;
	int flag = p3 - 1;
	if (!flag)
	{
		if (a[c - 1] >= '0' && a[c - 1] <= '9')
		{
			for (i = 1; i <= a[c + 1] - a[c - 1]; i++)
			{
				for (j = 1; j <= p2; j++)
					printf("%c", a[c - 1] + i);
			}
		}
		else if (p1 == 1 && a[c - 1] >= 'A' && a[c - 1] <= 'Z')
		{
			for (i = 1; i <= a[c + 1] - a[c - 1]; i++)
			{
				for (j = 1; j <= p2; j++)
					printf("%c", a[c - 1] - 32 + i);
			}
		}
		else if (p1 == 2 && a[c - 1] >= 'a' && a[c - 1] <= 'z')
		{
			for (i = 1; i <= a[c + 1] - a[c - 1]; i++)
			{
				for (j = 1; j <= p2; j++)
					printf("%c", a[c - 1] + 32 + i);
			}
		}
		else if (p1 == 3 )
		{
			for (i = 1; i <= a[c + 1] - a[c - 1]; i++)
			{
				for (j = 1; j <= p2; j++)
					printf("*");
			}
		}
		
	}
	else
	{
		if (a[c - 1] >= '0' && a[c - 1] <= '9')
		{
			for (i = 1; i <= a[c + 1] - a[c - 1]; i++)
			{
				for (j = 1; j <= p2; j++)
					printf("%c", a[c + 1] -i);
			}
		}
		else if (p1 == 1 && a[c - 1] >= 'A' && a[c - 1] <= 'Z')
		{
			for (i = 1; i <= a[c + 1] - a[c - 1]; i++)
			{
				for (j = 1; j <= p2; j++)
					printf("%c", a[c - 1] - 32 - i);
			}
		}
		else if (p1 == 2 && a[c - 1] >= 'a' && a[c - 1] <= 'z')
		{
			for (i = 1; i <= a[c + 1] - a[c - 1]; i++)
			{
				for (j = 1; j <= p2; j++)
					printf("%c", a[c - 1] + 32 - i);
			}
		}
		else if (p1 == 3)
		{
			for (i = 1; i <= a[c + 1] - a[c - 1]; i++)
			{
				for (j = 1; j <= p2; j++)
					printf("*");
			}
		}
	}

}