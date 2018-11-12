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

//==============================不知道为什么上面会报错======================================

#include <iostream>
#include <algorithm>
using namespace std;

#define maxm 5001
struct milk
{
	int price, account;
};//结构体
milk a[maxm];
int n, m, sum, ans;
bool comp(const milk &x, const milk &y)
{
	return x.price < y.price;
}//排序，单价较低的排在前面
int main()
{
	cin >> n >> m;//读入
	sum = n;//将当前所还需的牛奶赋为n
	for (int i = 0; i < m; ++i)
		cin >> a[i].price >> a[i].account;//读入单价和数量
	sort(a, a + m, comp);//排序
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
		}//详见思路中的“核心部分”
	}
	printf("%d", ans);//输出答案
	return 0;
}