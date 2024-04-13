#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	set<int> si;
	for (int i=0; i<3; i++)
	{
		cin >> a;
		si.insert(a);
	}
	for (auto it = si.begin(); it!=si.end(); ++it)
		cout << *it << ' ';
}