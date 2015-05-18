#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,cnt=0;
	string s;
	int all[26],all_seq[26];
	cin >> n;
	cin >> s;
	for(int i=0;i<26;i++){
		all[i]=0;
		all_seq[26]=0;
	}
	for(int i=0;s[i];i++){
		if(cnt == n)
			continue;
		if(!all[s[i]-'a']){
			all_seq[cnt]=i;
			cnt++;
			all[s[i]-'a']=1;
		}
	}
	if(cnt == n){
		cout << "YES" << endl;
		for(int i=0,j=1;s[i];i++) {
			if((all_seq[j] == i) && i) {
				cout << endl;
				j++;
			}
			cout << s[i];
		}
		cout << endl;
	}
	else {
		cout << "NO" << endl;
	}
	return 0;
}