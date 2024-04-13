#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i<n; i++){
		cin >>a[i];
		}
	stack<int> s;
	for(int i : a)
	{
		if (s.empty()||(s.top()+i) % 2 != 0)
		s.push(i);
		else
		s.pop();
		}
	cout <<s.size() <<endl;
	return 0;		
}