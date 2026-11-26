#include <iostream> 
using namespace std;
int main() {
 int t; cin>>t; while(t--){
  int n; cin>>n; int A[n],max=0; for(int i=0;i<n;i++){ cin>>A[i]; if(A[i]>max) max=A[i]; } cout<<max<<endl; } return 0; }