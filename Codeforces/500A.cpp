#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,t;
	bool flag = false;
	int arr[30001];
	cin >> n >> t;
	for(int i=0;i<n-1;i++)
		cin >> arr[i];
	for(int i=0;i<t-1;){
		i = i + arr[i];
		if(i+1 == t)
			flag = true;
	}
	if(flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}