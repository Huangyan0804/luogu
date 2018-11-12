#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void swap(int a, int b) {
	int t;
	t = a; a = b; b = t;
}
int comp(const void*a, const void*b)//用来做比较的函数。
{
	return *(int*)a - *(int*)b;
}


int a[100];
int flag[1000];
int main(){
	int n, i, j, k, t, sum;
	memset(flag, 0, sizeof(flag));
	scanf("%d", &n);
	for ( i = 0; i < n; i++)
		scanf("%d", &a[i]);
	sum = n;
	qsort(a, n, sizeof(int), comp);
	for (i = 0; i < n; i++) {
		if (flag[a[i]]) { 
			sum--;
			continue;
		}
		else
			flag[a[i]] = 1;
	}
	printf("%d", sum);
	for (i = 1; i <= 1000; i++) {
		if (flag[i]) 
			printf("%d", i);
	}
	getch();
	return 0;
}