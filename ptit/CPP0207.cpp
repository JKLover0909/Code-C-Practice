#include <bits/stdc++.h>
using namespace std;

int main(){	
	int a; cin >> a;
	while(a--)
	{
		long long b, d; cin >> b >> d;
	    long long c[b];
		for(long long i=0; i<b; i++)
		    {
			    cin >> c[i];
		    }	
		for(int i=d; i<b; i++ )
		    {
		    	cout << c[i] <<" ";
			}
		for(int i=0; i<d; i++)
		    {
		    	cout << c[i] <<" ";
			}
	cout << endl;		    
	}
}