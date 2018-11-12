#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, sum=0;
	int a[10001];
	cin >> n;
	for (int i = 1; i <= n; i++) 
		cin >> a[i];
	sort(a + 1, a + 1 + n);
	while (1) {
		int j = 1;
		if (j == n )
			break;
		else {
			a[j + 1] += a[j];
			for (int s = 1; s <= k; s++)
				a[s] = a[s - 1];
			k--; j++;
			for (int s = 1; s <= k; s++) {
				if (a[s] > a[s + 1]) swap(a[s], a[s + 1]);
			}
		}
	}
	cout << a[1];
	system("pause");
	return 0;
}