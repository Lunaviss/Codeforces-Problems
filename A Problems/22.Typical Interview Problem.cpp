#include <bits/stdc++.h>

using namespace std;

void solve() {
	int k;
	cin >> k;
	const string FB = "FBFFBFFBFBFFBFFBFBFFBF";
	string str;
	cin >> str;
	size_t found = FB.find(str);
	cout << ((found != string::npos) ? "YES\n" : "NO\n");
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	// freopen("learning.INP", "r", stdin);
	int t;
	cin >> t;
	while (t--)
		solve();
}
