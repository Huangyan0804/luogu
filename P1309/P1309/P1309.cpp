#include<bits/stdc++.h>
using namespace std;
struct r {
	int num;
	int s, w;
} csz[200001];
int cmp(r a, r b) {
	if (a.s > b.s) return 1;
	else if (a.s < b.s) return 0;
	else
		if (a.num < b.num) return 1;
		else return 0;
}
int main() {
	int n, r, q;
	cin >> n >> r >> q;
	for (int i = 1; i <= 2 * n; i++) {
		csz[i].num = i;
		cin >> csz[i].s;
	}
	for (int i = 1; i <= 2 * n; i++)
		cin >> csz[i].w;
	sort(csz + 1, csz + 1 + 2 * n, cmp);
	for (int j = 0; j < r; j++) {
		for (int i = 1; i <= 2 * n; i += 2) {
			if (csz[i].w > csz[i + 1].w) csz[i].s += 1;
			else csz[i + 1].s += 1;
			sort(csz + 1, csz + 1 + 2 * n, cmp);
		}
	}
	cout << csz[q].num<<endl;
	return 0;
}