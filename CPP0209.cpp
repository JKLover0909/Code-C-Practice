#include <bits/stdc++.h>
using namespace std;

int main(){
	int T; cin >> T;
	while(T--)
	{
		int n, Q;
		cin >>n >>Q;
		int a[n];
		for(int &x:a) cin>>x;
		while(Q--)
		{
			long long Tong = 0;
			int L, R; cin >> L >> R;
		    for(int i=L-1; i<R; i++)
			{
				Tong += a[i];
			}
			cout << Tong << endl;	
		} cout << endl;
    }
}