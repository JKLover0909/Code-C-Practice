#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	for(int i=0;i<s.size();i++){	
		if(s[i]>='a' && s[i] <='z'){
			if(s[i]>='y' && s[i] <='z') s[i]=s[i]-24;
			else s[i]= s[i]+2;
	}
		if(s[i]>='A' && s[i] <='Z'){
			if(s[i]>='A' && s[i] <='B') 
			s[i]=s[i]+24;
			else s[i]= s[i]-2;
		}
	
	}
	cout << s;

}