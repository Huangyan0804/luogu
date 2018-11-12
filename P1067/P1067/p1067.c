#include<stdio.h>
#include<conio.h>
int main()
{
	int cs;//次数
	int i;
	int xs[101];//系数

	scanf_s("%d", &cs);
	for (i = 0; i <= cs; i++)
		scanf_s("%d", &xs[i]);
	if (xs[0] < 0) 
		printf("%dx^%d", xs[0], cs);
	else if(xs[0]>0)
		printf("%dx^%d", xs[0], cs);
	for (i = 1; i < cs ; i++)
	{
		if (xs[i] != 0)
		{
			
			if (xs[i] == 1)
				printf("+x^%d", cs - i);
			else if (xs[i] == -1)
				printf("-x^%d", cs - i);
			else if (xs[i] > 0)
				printf("+%dx^%d", xs[i], cs - i);
			else
				printf("%dx^%d", xs[i], cs - i);
		}
		else
			continue;
	}
	if (xs[cs] > 0)
		printf("+%d",xs[cs]);
	else if (xs[cs - 1] < 0)
		printf("-%d",xs[cs]);
	_getch();
	return 0;
}