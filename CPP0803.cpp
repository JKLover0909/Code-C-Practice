#include<bits/stdc++.h>
using namespace std;

int main(){
	ifstream in {"VANBAN1.TXT"};
	ifstream in2 {"VANBAN2.TXT"};
	set <string> se;
	map <string, int> mp;
	if (in.is_open()){
		string line;
		while(in >> line){
			for(int i=0;i<line.length();i++){
			line[i]=tolower(line[i]);}
			mp.insert({line,1});
			mp[line]++;
		}
	}
	if (in2.is_open()){
		string line;
		while(in2 >> line){
			for(int i=0;i<line.length();i++){
			line[i]=tolower(line[i]);}
			se.insert(line);
			if(mp[line]==1) mp[line]=2;
		}
	}
	for (auto x : se){
		cout << x << " ";
	}
	cout << endl;
	for (auto x : mp){
		if (x.second == 2){
			cout << x.first <<" ";
		}
	}
}