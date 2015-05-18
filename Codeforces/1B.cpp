#include<bits/stdc++.h>
using namespace std;

int computeRow(string str) {
	int num = 0;
	for(int i=0;str[i];i++) {
		num *= 26;
		num += (str[i]-'A' + 1);
	}
	return num;
}

string formStr(int a){
	if(a >= 0){
		string s = "";
		s += ('A' + a%26);
		return formStr(a/26 - 1) + s;
	}
	return "";
}

int main() {
	int n;
	string s,sa,sb;
	int a,b;
	cin >> n;
	while(n--) {
		cin >> s;
		sa = sb = "";
		a = b = 0;
		for(int i=0;s[i];i++) {
			if(sa.compare("") == 0)
				sa += s[i];
			else if(s[i]>='0' && s[i]<='9') {
				if(sb.compare("")) {
					b*=10; b += s[i]-'0';
				}
				else {
					a*=10; a += s[i]-'0';
				}
			}
			else if(a == 0){
				sa += s[i];
			}
			else {
				sb += s[i];
			}
		}
		if(sb.compare("") == 0) {
			cout << "R" << a << "C" << computeRow(sa) << endl;
		}
		else {
			cout << formStr(b-1) << a << endl;
		}
	}
	return 0;
}