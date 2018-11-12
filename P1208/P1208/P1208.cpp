/*#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;
struct n{
	int a;
	int b;
} milk[5002];
bool comp(const n &x, const n &y)
{
	return x.a < y.a;
}
int main() {
	int n;
	int m;
	int ans=0;
	int k = 0;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
		cin >> milk[i].a >> milk[i].b;
	sort(n, n + m, comp);
	while(1) {
		if (n > milk[k].b) {
			ans += milk[k].a*milk[k].b;
			n -= milk[k].b;
		}
		else { 
			ans += n * milk[k].a;
			break;
		}
		k++;
	}
	cout << ans;
	return 0;
}*/

//==============================��֪��Ϊʲô����ᱨ��======================================

#include <iostream>
#include <algorithm>
using namespace std;

#define maxm 5001
struct milk
{
	int price, account;
};//�ṹ��
milk a[maxm];
int n, m, sum, ans;
bool comp(const milk &x, const milk &y)
{
	return x.price < y.price;
}//���򣬵��۽ϵ͵�����ǰ��
int main()
{
	cin >> n >> m;//����
	sum = n;//����ǰ�������ţ�̸�Ϊn
	for (int i = 0; i < m; ++i)
		cin >> a[i].price >> a[i].account;//���뵥�ۺ�����
	sort(a, a + m, comp);//����
	for (int i = 0; i < m && sum>0; ++i)
	{
		if (a[i].account <= sum)
		{
			sum -= a[i].account;
			ans += a[i].price*a[i].account;
		}
		else
		{
			ans += sum * a[i].price;
			sum = 0;
		}//���˼·�еġ����Ĳ��֡�
	}
	printf("%d", ans);//�����
	return 0;
}