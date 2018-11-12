#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int f[20001];
int main() {
	int n, m;
	cin >> m;
	cin >> n;
	int v;
	for (int i = 0; i < n; i++) {
		cin >> v;
		for (int j = m; j >= v; j--) {
			f[j] = max(f[j], f[j - v] + v);
		}
	}
	cout << m - f[m] << endl;
	return 0;
}