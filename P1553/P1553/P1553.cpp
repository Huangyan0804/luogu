#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

bool xsd = false;//�Ƿ�ΪС��
bool bfs = false;//�Ƿ�Ϊ�ٷ���
bool fs = false;//�ж��Ƿ��Ƿ���
char ans[21];
int k = 0;//��ʶ���ŵ�λ��

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