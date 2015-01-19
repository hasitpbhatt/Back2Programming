// 458 - The Decoder

#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string c;
	while(cin >> c){
		for(int i=0;c[i]!='\0';i++){
			cout << char(c[i]-7);
		}
		cout << endl;
	}
	return 0;
}