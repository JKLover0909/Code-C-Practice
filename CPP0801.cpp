#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main(){
	ifstream in ; long long sum=0;
	in.open("C:\\Users\\Admin\\OneDrive - ptit.edu.vn\\Documents\\THCS\\DATA.TXT");
	ofstream out {"PTIT.in"};
	if (in.is_open()){
		string line;
	while(in >> line){
		if (line.size()>=1 && line.size()<=9 && isdigit(line[0])){
			sum+=stoi(line);
		}
	} }
	cout << sum << endl;
	out << sum << endl;
	in.close();
	return 0;
}

