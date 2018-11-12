#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int f[101][1001];
	f[0][0] = 0;
	int t, m;
	cin >> t >> m;
	int v[101], w[101];
	for (int i = 1; i <= m; i++) {
		cin >> v[i] >> w[i];
	}
	for (int i = 1; i <= m; i++) {
		for (int j = 0; j <= t; j++) {
			f[i][j] = f[i - 1][j];
			if (j >= v[i]) {
				f[i][j] = max(f[i][j], f[i - 1][j - v[i]] + w[i]);
			}
		}
	}
	int ans = 0;
	for (int i = 0; i <= t; i++) {
		ans = max(ans, f[m][i]);
	}
	cout << ans;
	return 0;
}