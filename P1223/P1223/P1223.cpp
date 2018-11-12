#include <iostream>
#include <algorithm>
#include<cstdio>
using namespace std;
struct n {
	int time;
	int num;
}man[1005];
bool cmp(n a, n b) {
	return a.time < b.time;
}

int main() {
	int n, k;
	double sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> man[i].time;
		man[i].num = i;
	}
	sort(man + 1, man + 1 + n, cmp);
	for (int i = 1; i <= n; i++)
		cout << man[i].num << ' ';
	cout << endl;
	for (int j = n - 1; j >= 1; j--) {
		k = n - j;
		sum += man[k].time * j;
	}
	printf("%.2f", sum/n);
	return 0;
}