#include<bits/stdc++.h>
using namespace std;
int test(long long a){
	if (a<2)
	return 0;
	else if
	 ( a==2)
	return 1; 
    for (  int i=2; i<=sqrt(a);i++){
    	if (a%i==0) return 0;
	} return 1;
}
int main(){
	int T; cin >> T;
	while(T--){
		long long N; cin >> N;
		int dem=0;
		for(int i=2; i<=sqrt(N); i++)
		    {
			if(test(i)==1) dem++;
			}
	    cout <<dem<<endl;
    }
}

