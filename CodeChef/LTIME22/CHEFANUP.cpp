#include <bits/stdc++.h>
using namespace std;

void fun(long long n,long long k,long long l){
	if(n == 0)
		return;
	fun(n-1,k,l/k);
	if(n != 1)
	cout << " ";
	cout << l%k + 1;
}

int main() {
	long long t;
	cin >> t;
	while(t--) {
		long long n,k,l;
		cin >> n >> k >> l;
		fun(n,k,l-1);
		cout << endl;
	}
	return 0;
}