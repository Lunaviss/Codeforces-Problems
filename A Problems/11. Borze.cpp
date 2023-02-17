#include<bits/stdc++.h>

using namespace std;

void solve() {
	string borzeCode, decodedString;
	cin >> borzeCode;
	for (int i = 0; i < borzeCode.size(); ++i)
		if (borzeCode[i] == '.') decodedString += '0';
		else {
			if (borzeCode[i + 1] == '.') decodedString += '1';
			else decodedString += '2';
			i++;
		}
	cout << decodedString;
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	// freopen("learning.INP", "r", stdin);
	solve();
	return 0;
}
