#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<sstream>
#include<algorithm>
#include<map>
using namespace std;
map<char, char> mp;
string fun() {
	char astr[101], bstr[101], ansstr[101];
	string ans;
	cin >> astr >> bstr >> ansstr;
	int alen = strlen(astr);
	for (int i = 0; i < alen; i++) {
			mp[astr[i]] = bstr[i];
			for (int j = 0; j < i; j++)
				if (bstr[i] == bstr[j] && astr[i] != astr[j])
					return "Failed";
	}
	char temp = 'A';
	for (int i = 0; i < 26; i++){
		if (!mp.count(temp + i)) {
			return "Failed";
		}
	}
	int clen = strlen(ansstr);
	for (int i = 0; i < clen; i++) {
		if (ansstr[i] != ' ')
			ans += mp[ansstr[i]];
	}
	return ans;
}
int main(){
	string ans = fun();
	cout << ans << endl;
	return 0;
}