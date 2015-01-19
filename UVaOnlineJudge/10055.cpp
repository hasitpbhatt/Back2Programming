// 10055 - Hashmat the Brave Warrior

#include<bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long a,b;
	while(cin >> a >> b){
		if(b>a)
			cout << b-a << endl;
		else
			cout << a-b << endl;
	}
	return 0;
}