#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

int main() {
	string a, b;
	getline(cin, a);
	getline(cin, b);
	for (int i = 0; i < a.length(); i++) 
		a[i] = tolower(a[i]);
	for (int i = 0; i < b.length(); i++) 
		b[i] = tolower(b[i]);
	a = ' ' + a + ' ';
	b = ' ' + b + ' ';
	if (b.find(a) == string::npos) {
		cout << -1 << endl;
	}
	else {
		int  num=0;
		int pos = b.find(a), n = b.find(a);
		while (n!=string::npos){
			num++;
			n = b.find(a, n + 1);
		}
		cout << num << ' ' << pos << endl;
	}
	system("pause");
	return 0;
}