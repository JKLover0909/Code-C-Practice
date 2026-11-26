#include<bits/stdc++.h>
#include <string.h>
using namespace std;
int main(){
		string s;
		getline(cin, s);
		string y;
		getline(cin, y);
		int d = y.size();
		int a = s.find(y);
		string b = s.erase(a,d);
		cout << b <<"\n";
}
