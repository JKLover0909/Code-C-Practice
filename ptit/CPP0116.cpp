#include<bits/stdc++.h>
using namespace std;
int main(){
	int T; cin >> T;
	while(T--){
		int N; cin >> N;
		for(int i=2; i<sqrt(N); i++)
		    {
			int d=0;
			int e=N;
			while(e%i==0)
			    {
				e/=i;
				d++;	 
			    if(d>1)
			        {
				    cout << "0"; return 0;
			        }
		        }
			}
	    cout <<"1"<<endl;
    }
}

