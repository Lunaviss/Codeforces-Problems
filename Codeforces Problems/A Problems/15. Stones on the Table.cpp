#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	int cnt = 0;
	cin >> n;
	char s[n];
	cin >> s;
	for(int i = 0; i < n - 1; ++i)
		if (s[i] == s[i + 1]) cnt++;
	cout << cnt;
}

int main(int argc, char const *argv[])
{
  	ios::sync_with_stdio(0);
  	cin.tie(0); cout.tie(0);
  	solve();
  	return 0;
}
