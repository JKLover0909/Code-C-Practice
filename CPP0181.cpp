#include<bits/stdc++.h>
using namespace std;
long long SNT(long long x) { 
if (x == 1) {
 return (0);
}
 else if (x == 2) { 
 return (1); 
 } 
 else { int a = sqrt(x);
  for (int i = 2; i <= a; i++) {
   if (x % i == 0) {
   return (0); 
   } }
   return (1);} }
int main()	
{
	int T; cin >> T;
	while(T--)
	    {
		long long  L, R;
		cin >> L >> R;
		int dem=0;
		for(int i=L ; i<=R; i++){
			if (SNT(i) == 1) dem++;
		} cout <<dem <<endl;
	    
    } cout << endl;
}
		