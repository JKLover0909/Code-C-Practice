#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>> n;
	multiset<int> mst;
	while(n--)
	{
		int x; cin >> x;
		mst.insert(x);
	}
	
    int q; cin >> q;
	while(q--){
		int tt; int z;
		cin >> tt >> z;
		if (tt==1){
			mst.insert(z);
		}
		else if (tt==2){
		    auto it=mst.find(z);
		    if(it!=mst.end()){
		    	mst.erase(it);
			}    
		}
		else if (tt==3){
			auto it=mst.find(z);
		    if(it!=mst.end()){
		    	cout<<"Yes\n";
			} else  cout<<"No\n";
		}
	}	
}

