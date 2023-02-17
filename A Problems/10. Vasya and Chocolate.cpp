#include<bits/stdc++.h>

using namespace std;

void solve() {
	int t, s, a, b, c;
	long long chocolates, bonus;
	cin >> t;
	while (t--) {
		cin >> s >> a >> b >> c;
		chocolates = (long long) s/c;
		bonus = (long long) chocolates/a * b;
		cout << chocolates + bonus << '\n';
	}
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	// freopen("learning.INP", "r", stdin);
	solve();
	return 0;
}
