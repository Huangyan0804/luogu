#include<cstdio>
using namespace std;
int f21[10000][2];//��¼21��
int main()
{
	int w1 = 0, l1 = 0, w2 = 0, l2 = 0, j = 0;//w1l1Ϊ11�� w2l2Ϊ21��
	char k;
	while (scanf("%c", &k) && k != 'E')
	{
		if (k == 'W') { w1++; w2++; }
		if (k == 'L') { l1++; l2++; }
		if ((w1 >= 11 && w1 - l1 >= 2) || (l1 >= 11 && l1 - w1 >= 2)) { printf("%d:%d\n", w1, l1); w1 = 0; l1 = 0; };//���11��
		if ((w2 >= 21 && w2 - l2 >= 2) || (l2 >= 21 && l2 - w2 >= 2)) { f21[j][0] = w2; f21[j][1] = l2; w2 = 0; l2 = 0; j++; };//��¼21��
	}
	printf("%d:%d\n\n", w1, l1);
	for (int i = 0; i<j; i++)printf("%d:%d\n", f21[i][0], f21[i][1]);//���21��
	printf("%d:%d", w2, l2);
}