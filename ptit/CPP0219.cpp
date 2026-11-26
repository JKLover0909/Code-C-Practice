#include <bits/stdc++.h>
using namespace std;
int main(){
	int T; cin >> T;
	while(T--)
	{
		int N, M; cin >> N >> M;
		int A[N][M];
		for(int i=0;i<N;i++)
		    {
		    for(int j=0;j<M;j++)
			    {
			    cin>>A[i][j];
				}
			}
		for(int i=0;i<N;i++)
		    {
		    for(int j=0;j<M;j++)
			    {
			       if (A[i][j]==1)
			       {
			       	for(int g=0;g<M;g++)
			       	{
			       		if(A[i][g]==1) continue;
			       		else A[i][g]=2;
					}
			        for(int h=0;h<N;h++)
			       	{
			       		if(A[h][j]==1) continue;
			       		else A[h][j]=2;
					}
				   }
		        }
		    }
		for(int i=0;i<N;i++)
		    {
		    for(int j=0;j<M;j++)
			    {
			    if(A[i][j]==2) A[i][j]=1;
				} 
			}
		for(int i=0;i<N;i++)
		    {
		    for(int j=0;j<M;j++)
			    {
			    cout << A[i][j]<<" ";
				} 
				cout << endl;
			}  
    }
}