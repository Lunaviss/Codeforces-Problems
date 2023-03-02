#include <bits/stdc++.h>

using namespace std;

void solve() {
	const int tableLength = 5 ;
	int input;
	for (int i = 0; i < tableLength; ++i)
		for (int j = 0; j < tableLength; ++j)
		{
			cin >> input;
			if (input == 1) cout << abs(i-3) + abs(j - 3);
		}
}


int main(int argc, char const *argv[])
{
	freopen("learning.INP", "r", stdin);
  	ios::sync_with_stdio(false);
  	cin.tie(0); cout.tie(0);
  	solve();
}
