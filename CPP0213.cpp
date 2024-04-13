#include <iostream>
using namespace std;
int check(long long n){
    if (n<2) return 1;
	long long f0=0; 
	long long f1=1; 
	for (int i=2;i<=92;i++){
	    long long fn=f0+f1;
		if (fn==n) return 1;
		f0=f1; f1=fn;
		}
	 return -1; 
} 
int main(){
    int t; cin>>t; 
	while(t--){
		long long n; cin>> n;
		long long a[n];
	    for(int i = 0; i<n ; i++){
	    	cin >> a[i];
		    }
	    for (int i = 0; i<n ; i++){
	    	if(check(a[i])==1 || a[i] == 0){
	    		cout << a[i] <<" ";
			}
		}
	    cout << endl;    
	} 
}