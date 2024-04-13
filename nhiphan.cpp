#include<iostream>
#include<string>

using namespace std;
int check(string s,int k)
{
	int dem=0;
	for (int i=0;i<=s.length()-1;i++)
	{
		if (s[i]=='1') dem+=1;
	}
	if (dem!=k) return 0;
	return 1;
}

int main(){ 
    cout << "Input N: ";
    int n,k;
    cin >> n >> k;
    string first_number;
    string last_number;
    for(int i = 0; i < n; i++)
	{
        first_number += "0";
        last_number += "1";
    }
    while(first_number != last_number)
	{
        for( int i = first_number.length() - 1; i >= 0; i--)
		{
            if(first_number[i] == '1')
			{
                first_number[i] = '0';
            }
            else
			{
                first_number[i] = '1';
                break;
            }
        }
        if (check(first_number,k)) cout << first_number << endl;
    }

    return 0;
}