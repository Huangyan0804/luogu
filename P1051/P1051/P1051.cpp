#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, i, money, ans = 0;
	int qmcj[101], bjcj[101], lw[101];
	string xm[101];
	char xb[101], gb[101];
	string max; int maxm = 0;
	cin >> n;
	for (i = 0; i < n; i++) {
		money = 0;
		cin >> xm[i] >> qmcj[i] >> bjcj[i] >> gb[i] >>  xb[i] >> lw[i];
		if (qmcj[i] > 80 && lw[i] >= 1) money += 8000;
		if (qmcj[i] > 85 && bjcj[i] > 80) money += 4000;
		if (qmcj[i] > 90) money += 2000;
		if (xb[i] == 'Y'&&qmcj[i] > 85) money += 1000;
		if (gb[i] == 'Y'&&bjcj[i] > 80) money += 850;
		ans += money;
		if (money > maxm) {
			max = xm[i];
			maxm = money;
		}
	}
	cout << max << endl << maxm << endl << ans ;
	system("pause");
	return 0;
}