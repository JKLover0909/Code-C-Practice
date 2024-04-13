#include<bits/stdc++.h>
using namespace std;
int tcs( int x){
	int t=0;
	while (x>0)
	{
		t = t + x%10;
		x/=10;
	} return t;
}
int main(){
	int a;
	cin >> a;
	int d=a;
	int c=0;
	for (int i=2;i<a;i++){
		int b=0;
		while(d%i==0){
			b=b+1;
			d=d/i;
		}  c=c+(b*tcs(i));   
	  } if (c==tcs(a))
		cout << "YES" << endl;
		else
		cout << "NO" << endl;
}
