#include<bits/stdc++.h>
using namespace std;

int main(){
	int check[9];
	check[7] = 2;
	check[6] = check[8] = 1;
	int n;
	cin >> n;
	scanf("\n");
	string poem;
	vector<pair<int, int>>a;
	int cnt = 0;
	while (getline(cin,poem))
	{
		stringstream ss(poem);
		string token;
		int count = 0;
		while(ss >> token)
		++count;
		if(a.empty() || a.back().first != check[count] || a.back().second ==4)
		a.push_back({check[count],0});
		if (check[count] == 2)
		++a.back().second;
	}
	cout << a.size() <<endl;
	for(auto i : a)
	cout << i.first << endl;
	return 0;
}