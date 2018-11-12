#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int f[100001];
int main() {
	int t, m;
	cin >> t >> m;
	int v, w;
	for (int i = 0; i < m; i++) {
		cin >> v >> w;
		for (int j = v; j <= t; j++) {
				f[j] = max(f[j], f[j - v] + w);
		}
	}
	cout << f[t] << endl;
	return 0;
}