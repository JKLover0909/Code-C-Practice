#include<bits/stdc++.h>
using namespace std; 
int main(){ 
    int t; cin>>t; 
	cin.ignore(); 
	while(t--){ 
	    string s; 
		getline(cin,s); 
		int check[100001]={0};
		memset(check, 0, sizeof(check));
		for(int i=0;i<s.length();i++){ 
		    check[s[i]]++;
			} 
	    for(int i=0;i<s.length();i++){
		    if(check[s[i]]<2) cout<<s[i]; 
			}
	    cout<<endl; 
	} 
}