#include <bits/stdc++.h>
 
using namespace std;
 
void solve(string str) {
	int length = str.length();
	if ((length - 2) < 9) cout << str;
	else cout << str[0] << length - 2 << str[length-1];
}
 
 
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int n;
	cin >> n;
	string str[n];
	for (int i = 0; i < n ; ++i)
	{
		string localStr;
		cin >> localStr;
		str[i] = localStr;
	}
	for (int i = 0; i < n ; ++i)
	{
		solve(str[i]);
		cout << '\n';
	}
}
