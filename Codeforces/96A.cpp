#include<bits/stdc++.h>
using namespace std;

int main() {
	long long cnt = 0, i = 0;
	char state = 0;
	string str;
	bool dangerous = false;
	cin >> str;
	while(str[i]) {
		if(state < '0'){
			state = str[i];
			cnt++;
		}
		else if(state == str[i]) {
			cnt++;
		}
		else {
			state = str[i];
			cnt = 1;
		}
		if(cnt > 6)
			dangerous = true;
		i++;
	}
	if(dangerous)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}