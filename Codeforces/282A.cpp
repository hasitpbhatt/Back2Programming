#include<bits/stdc++.h>
using namespace std;

int main() {
	long long n,X = 0;
	string str;
	cin >> n;
	while(n--) {
		cin >> str;
		if(str[0] == '+' || str[1]=='+')
			X++;
		else if(str[0] == '-' || str[1] == '-')
			X--;
	}
	cout << X << endl;
	return 0;
}