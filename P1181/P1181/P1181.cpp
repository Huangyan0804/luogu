#include<iostream>
using namespace std;

int main() {
	int n, m, ans = 1, sum=0;
	int a[100001];
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++) {
		if (a[i] + sum <= m) {
			sum += a[i];
		}
		else {
			ans++;
			sum = a[i];
		}
	}
	cout << ans;
	return 0;
}