#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<sstream>
#include<algorithm>
#include<map>
using namespace std;
map<string,int> number;

string intToString(int a) {
	string ans;
	stringstream ss;
	ss << a;
	ss >> ans;
	return ans;
}

void start() {
	number["one"] = 1;
	number["two"] = 2;
	number["three"] = 3;
	number["four"] = 4;
	number["five"] = 5;
	number["six"] = 6;
	number["seven"] = 7;
	number["eight"] = 8;
	number["night"] = 9;
	number["ten"] = 10;
	number["eleven"] = 11;
	number["twelve"] = 12;
	number["thirteen"] = 13;
	number["fourteen"] = 14;
	number["fifteen"] = 15;
	number["sixteen"] = 16;
	number["seventeen"] = 17;
	number["eighteen"] = 18;
	number["nineteen"] = 19;
	number["twenty"] = 20;
	number["a"] = 1;
	number["both"] = 2;
	number["another"] = 1;
	number["first"] = 1;
	number["second"] = 2;
	number["third"] = 3;
}

int main() {
	start();
	string str;
	long long num[6];
	int k = 0;
	getline(cin, str);
	str.erase(str.end() - 1);
	int lpos = 0, rpos = 0;
	string tempstr;
	for (int i = 1; i <= 6; i++) {
		rpos = str.find(' ', lpos + 1);
		tempstr = str.substr(lpos, rpos - lpos);
		if (number.count(tempstr)) {
			int tempnum = number[tempstr];
			num[k++] = tempnum * tempnum % 100;
		}
		lpos = rpos + 1;
	}
	sort(num, num + k);
	bool flag = true;
	for (int i = 0; i < k; i++) {
		if (flag) {
			printf("%d", num[i]);
			flag = false;
		}
		else
			if (num[i] != '0') {
				printf("%.2d", num[i]);
			}
	}
	if (flag)
		cout << '0';
	return 0;
}