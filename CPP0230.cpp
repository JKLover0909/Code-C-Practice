#include"bits/stdc++.h"
using namespace std;
int main() {
	    int n, m, p; cin >> n >> m >> p;
		int a[n][m];
		for(int i=0;i<n;i++)
		    {
			for(int j=0;j<m;j++)
			    {
			    cin >> a[i][j]; 
				}
	   	    }
	   	int b[m][p];    
	   	for(int i=0;i<m;i++)
		    {
			for(int j=0;j<p;j++)
			    {
			    cin >> b[i][j]; 
				}
	   	    }
	   	int c[n][p];
		for(int i=0;i<n;i++)
		    {
			for(int j=0;j<p;j++)
			    {
			     c[i][j]=0;
				}
	   	    }       
		for(int i=0;i<n;i++)
		    {
			for(int j=0;j<p;j++)
			    {
				for(int x=0; x<m; x++)
				    {
				    c[i][j]+=( a[i][x] * b[x][j] );
					}
				cout <<	c[i][j] <<" ";	
				}
			cout << endl;	
	   	    }   	       
    }

