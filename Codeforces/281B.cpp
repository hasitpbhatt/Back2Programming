#include<bits/stdc++.h>
using namespace std;

int main() {
	long long x,y,n,r;
	cin >> x >> y >> n;
	long long ans1=0,ans2=1;
	for(int i=1;i<=n;i++) {
		r = int((x*i)/y);
		if(r<0) r= -r;

		// if x/y is between two integers a/i and b/i, check which is nearer
		if(abs(ans2*r*y-ans2*x*i)<abs(i*ans1*y-i*ans2*x)) {
			ans1 = r;
			ans2 = i;
		}
		if(abs(ans2*(r+1)*y-ans2*x*i)<abs(i*ans1*y-i*ans2*x)) {
			ans1 = r+1;
			ans2 = i;
		}
	}
	cout << ans1 << "/" << ans2 << endl;
	return 0;
}