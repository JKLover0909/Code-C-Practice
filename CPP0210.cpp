# include <bits/stdc++.h> 
using namespace std; 
int main(){
    int t; cin>>t;
    while(t--){
	    int n; cin>>n; 
		int a[n+5]; 
		for(int i=0;i<n;i++)
		    {
		    cin>>a[i]; 
			} 
	    int max=-99999;
		for(int i=n-1;i>0;i--){
		    for(int j=i-1;j>=0;j--){
			    if(max<a[i]-a[j]) max=a[i]-a[j]; 
				}
			}
		cout<<max<<endl;
	}
}