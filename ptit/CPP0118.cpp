#include<bits/stdc++.h>
using namespace std;
int check(int N){
	int dem=0;
	int e=N;
	for(int i=2; i<N; i++)
		    {
			int d=0;
			while(e%i==0)
			    {
			    e/=i;
				d++;
			    }
		        if(d>1)
			        {
				    return 0;
			        } 
			if(d==1) dem++;		   
			}
	if(dem==3)
	    {
	    return 1;
		} 
	else return 0;
}
int main(){
	int T; cin >> T;
	while(T--){
		int N; cin >> N;
	    cout <<check(N)<<endl;
    }
}

