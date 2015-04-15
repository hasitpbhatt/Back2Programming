#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	long long i = 0;
	bool b = false;
	cin >> str;
	while(str[i]) {
		if(str[i] == 'H' || str[i]=='Q' || str[i] == '9')
			b = true;
		i++;
	}
	if(b)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}