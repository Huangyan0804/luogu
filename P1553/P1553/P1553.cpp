#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

bool xsd = false;//是否为小数
bool bfs = false;//是否为百分数
bool fs = false;//判断是否是分数
char ans[21];
int k = 0;//标识符号的位置

int judge(string a) {
	string::iterator aitr = a.begin();

	if(*a.end() = '%') 
		bfs = true;
	while (aitr != a.end()) {
		if (*aitr == '.') {
			xsd = true;
			break;
		}
		else if (*aitr == '/') {
			fs = true;
			break;
		}
		else {
			++aitr;
			k++;
		}
			
	}
}

int run(string a) {
	if (xsd || fs) {
		for (int i = 0; i < a.length(); i++) {
			ans[a.length() - i + 1] = a[i];
		}

	}
}

int main() {
	string shuzi;
	getline(cin, shuzi);
	cmp
	return 0;
}