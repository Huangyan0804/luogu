#include<stdio.h>
//#include<stdlib.h>

int main()
{
	float sum =0.0;
	float length=2.0, every=0.0;
	int step;
	scanf_s("%f", &sum);
	for (step = 1;; step++)
	{
		every += length;
		if (every >= sum)
			break;
		length *= 0.98;
	}
	printf("%d", step);
	//system("pause");
	return 0;
}