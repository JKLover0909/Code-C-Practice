#include <bits/stdc++.h>
using namespace std;

int main(){	
	int T; cin >> T;
	while(T--){int n; cin >>n;
	    int a[n];
	    int d[100005] = {0};
		for(long long i=0; i<n; i++)
		    {
			    cin >> a[i];
			    if (a[i]>0)
			    {
			        d[a[i]]++;
		        } 
		    }    
		for (int i=1; i<=1e6+5; i++)
		    {
			    if(d[i] == 0)  
				{
				    cout << i << endl;
				    break; 
				}
			}
	}
}