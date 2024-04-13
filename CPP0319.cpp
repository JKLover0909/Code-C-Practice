#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (a*9<b||a==0||b==0) {cout <<"-1 -1" <<endl; return 0;
	}
	int s[a] = {0};
	s[0]=1;
	b-=1;
	for(int i=a-1;i>=0;i--){
		if (b-9>0){
			s[i]=9;
			b-=9;
		}
		else {
			s[i] +=b;
			break;
		}   
	}
	for(int i=0; i<a; i++){
		cout << s[i];
	}
	cout << endl;
	sort(s, s + a);	
	for(int i=a-1; i>=0; i--){
		cout << s[i];
	}
}

