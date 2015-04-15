#include<bits/stdc++.h>
using namespace std;

int main() {
	long long n,cnt=0;
	int a,b,c;
	cin >> n;
	while(n--) {
		cin >> a >> b >> c;
		if(a+b+c > 1)
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}