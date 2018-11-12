#include<stdio.h>
#include <math.h>
//#include <stdlib.h>
int main()
{
	double sum = 0 ;
	int k;
	int n;
	scanf("%d", &k);
	for (n = 1;; n++)
	{
		sum += pow(n, -1);
		if (sum > k)
			break;
	}
	printf("%d", n);
	//system("pause");
	return 0;
}