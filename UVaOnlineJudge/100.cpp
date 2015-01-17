// 100 - 3n + 1 Problem

#include<bits/stdc++.h>
using namespace std;

unsigned int fun(unsigned int n){
	if(n == 1)
		return 1;
	else if(n&1)
		return 1 + fun(3*n+1);
	else
		return 1 + fun(n/2);
}

int main()
{
	unsigned int a,b,mx;
	while(cin >> a >> b){
		mx = 0;
		cout << a << " " << b << " ";
		if(a>b){
			unsigned int c = a;
			a = b;
			b = c;
		}
		for(unsigned int i=a;i<=b;i++){
			unsigned int n = fun(i);
			if(n > mx)
				mx = n;
		}
		cout << mx << endl;
	}
}