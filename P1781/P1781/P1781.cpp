#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int number;//奇怪的变量命名，其实这个是用来记录为当上总统的人的号数
	string max = "";//赋初值，如果是全局变量的话不必要，但是 max 不可以当全局变量（会重名）
					//如果一定要这样做的话，必须要去掉 using namespce std;，每个 cin 之类的之前都要加 std::
	string in;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> in;
		int inSize = in.size();
		int maxSize = max.size();
		if (inSize > maxSize || (inSize >= maxSize && in > max))
			//逻辑运算符是短路运算符。即一旦能够确定整个表达式的值，就不再继续计算。
			//所以这样写性能比几个 if 好些
			//实际差距几乎没有
		{
			max = in;
			number = i + 1;
		}
	}
	cout << number << '\n' << max << '\n';
	return 0;
}