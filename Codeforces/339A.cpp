#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	bool flag = false;
	int a[3] = {0}, cnt = 0;
	for(int i=0;s[i];i++)
		if(s[i]!='+') a[s[i]-'1']++;
	for(int i=0,j=0;j<3;i++){
		if(i == a[j]){
			i=-1;
			j++;
			continue;
		}
		if(!flag) {
			flag = true;
			cout << j+1;
		}
		else {
			cout << "+" << j+1;
		}
	}
	cout << endl;
	return 0;
}