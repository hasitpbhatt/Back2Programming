#include<bits/stdc++.h>
using namespace std;

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	for(int i=0;s1[i];i++) {
		if(s1[i] >= 'a')
			s1[i] += ('A' - 'a');
	}
	for(int i=0;s2[i];i++) {
		if(s2[i] >= 'a')
			s2[i] += ('A' - 'a');
	}
	int i;
	for(i=0;s1[i] && s2[i];i++) {
		if(s1[i]-s2[i] > 0) {
			cout << 1 << endl;
			break;
		}
		else if(s1[i]-s2[i]){
			cout << -1 << endl;
			break;
		}
	}
	if(s1[i] == 0)
		cout << 0 << endl;
	return 0;
}