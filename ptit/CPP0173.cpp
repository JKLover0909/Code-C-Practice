#include<bits/stdc++.h>
using namespace std;

long long UCLN(long long a, long long b)
    {
	if(a%b!=0) return UCLN(b,a%b);
	else return b;
    }  

long long BCNN(long long a, long long b)
    {
	return(a*b)/UCLN(a,b);
    }

int main()	
{
	int T; cin >> T;
	while(T--)
	    {
		long long X, Y, Z;
		
		long long N;
		
		cin >> X >> Y >> Z >> N;
		
	    long long C = pow(10, N-1)/BCNN(BCNN(X,Y),Z);
	    long long D = pow(10, N)/BCNN(BCNN(X,Y),Z);
	    if(C<1 && D<1)
		    {
		    	cout <<"-1"<<endl;
		    }
		else {
		if (C*BCNN(BCNN(X,Y),Z) < pow(10, N-1))  
		    {
		    C+=1;
		    cout << C*BCNN(BCNN(X,Y),Z) <<endl;
	        }
	        
		else
		    { 
		    cout << C*BCNN(BCNN(X,Y),Z) <<endl;
		    }
		    
	    }}
}
		