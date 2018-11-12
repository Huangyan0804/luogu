#include<bits/stdc++.h>
using namespace std;
struct stu {
	int num;
	int yw, sx, yy;
	int sum;
}student[301];
int cmp(stu a, stu b) {
	if (a.sum > b.sum) return 1;
	else if (a.sum < b.sum) return 0;
	else
		if (a.yw > b.yw) return 1;
		else if (a.yw < b.yw) return 0;
		else
			if (a.num < b.num) return 1;
			else return 0;
}
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> student[i].yw >> student[i].sx >> student[i].yy;
		student[i].num = i;
		student[i].sum= student[i].yw + student[i].sx + student[i].yy;
	} 
	sort(student + 1, student + 1 + n, cmp);
	for (int j = 1; j <= 5; j++) {
		cout << student[j].num <<" "<< student[j].sum << endl;
	}
	return 0;
}