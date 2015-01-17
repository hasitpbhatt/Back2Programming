// 10300 - Ecological Premium

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,test_cases,a,b,c,sum;
	cin >> n;
	while(n--){
		sum = 0;
		cin >> test_cases;
		while(test_cases--){
			cin >> a >> b >> c;
			sum += a*c;
		}
		cout << sum << endl;
	}
	return 0;
}