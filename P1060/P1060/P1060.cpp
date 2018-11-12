#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main() {
	int f[30001];
	int v, w;
	int n, m;
	memset(f, 0, sizeof(f));
	cin >> m >> n;
	for (int i = 1; i <= n; i++) {
		cin >> v >> w;
		for (int j = m; j >= v; j--) {
			f[j] = max(f[j], f[j - v] + w * v);
		}
	}
	cout << f[m] << endl;
	return 0;
}