#include<iostream>
using namespace std;
int main() {
	int  a, b;
	double money;
	int ans;
	cin >> a >> b;
	money = a + b * 0.1;
	ans = money / 1.9;
	cout << ans;
	return 0;
}