#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int number;//��ֵı�����������ʵ�����������¼Ϊ������ͳ���˵ĺ���
	string max = "";//����ֵ�������ȫ�ֱ����Ļ�����Ҫ������ max �����Ե�ȫ�ֱ�������������
					//���һ��Ҫ�������Ļ�������Ҫȥ�� using namespce std;��ÿ�� cin ֮���֮ǰ��Ҫ�� std::
	string in;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> in;
		int inSize = in.size();
		int maxSize = max.size();
		if (inSize > maxSize || (inSize >= maxSize && in > max))
			//�߼�������Ƕ�·���������һ���ܹ�ȷ���������ʽ��ֵ���Ͳ��ټ������㡣
			//��������д���ܱȼ��� if ��Щ
			//ʵ�ʲ�༸��û��
		{
			max = in;
			number = i + 1;
		}
	}
	cout << number << '\n' << max << '\n';
	return 0;
}