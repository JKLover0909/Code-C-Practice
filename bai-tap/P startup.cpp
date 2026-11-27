#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	double diem[n][2], x[n];
	for(int i=0;i<n;i++) {
		int a, b, c;
		cin >> a >> b >> c;
		diem[i][0] = a;
	 	diem[i][1] = (double)b * 70 / 100 + (double)c * 30 / 100;
	 	x[i] = (double)b * 70 / 100 + (double)c * 30 / 100;
	}
	sort(x,x+n);
	int cnt = 0;
	for(int i=n-1;i>=0;i--) {
		for(int j=0;j<n;j++) {
			if(diem[j][1] == x[i] && cnt < 7) {
				cout << diem[j][0] << " ";
				cnt++;
			}
		}
	}
}