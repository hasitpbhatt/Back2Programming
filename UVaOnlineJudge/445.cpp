// 445 - Marvelous Mazes

#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int cnt=0;
	while(getline(cin,s)){
		if(s.length() != 0){
			cnt = 0;
			for(int i=0;s[i]!=0;i++){
				switch(s[i]){
					case 'b':
						while(cnt--) cout << ' ';
						cnt++;
						break;
					case '!':
						cout << endl;
						break;
					case '0':
					case '1':
					case '2':
					case '3':
					case '4':
					case '5':
					case '6':
					case '7':
					case '8':
					case '9':
						cnt += int(s[i])-int('0');
						break;
					default:
						while(cnt--) cout << s[i];
						cnt++;
						break;
				}
			}
		}
		cout << endl;
	}
	return 0;
}
