#include<bits/stdc++.h>
using namespace std;
int main(){
	int T; cin >> T;
	while(T--)
	    {
		int M, N , A, B;
	    cin >> M >> N >> A >> B;
	    int dem=0;
	    for(int i=M; i<=N; i++){
	    	if (i%A==0 || i%B==0 )
	    		dem++;
			}cout << dem << endl;
		} 
	}
