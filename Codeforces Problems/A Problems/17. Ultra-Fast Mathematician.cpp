#include<bits/stdc++.h>

using namespace std;

void solve() {

	string first_number;
	string second_number;
	string answer;

	cin >> first_number >> second_number;
	int number_length = first_number.length();
	for(int i = 0; i < number_length; ++i)
		if(first_number[i] == second_number[i])
			answer += '0';
		else answer += '1';
	cout << answer;
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	// freopen("learning.INP", "r", stdin);
	solve();
	return 0;
}
