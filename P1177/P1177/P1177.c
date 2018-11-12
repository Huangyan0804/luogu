#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int a[100000];
int n;

void quicksort(int left, int right)
{
	int i = left;
	int j = right;
	int t;
	int tmp = a[left];

	if (left > right)
		return;

	while (i != j)
	{
		while (j > i && a[j] > tmp) {
			j--;
			if (i < j) {
				a[i] = a[j];
				i++;
			}
		}
		while (j > i && a[i] < tmp) {
			i++;
			if (i < j) {
				a[j] = a[i];	
				j--;
			}
		}
		if (i < j)
		{
			a[j] = a[i];
		}
	}
	a[i] = tmp;
	quicksort(left, i - 1);
	quicksort(i + 1, right);

}

int main()
{
	int i, j, t;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	quicksort(0, n-1);
	for (i = 0; i < n  ; i++)
		printf("%d ", a[i]);
	return 0;
}