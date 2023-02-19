#include <bits/stdc++.h>

using namespace std;

void solve() {
	int t, n, cnt, timeRemaining;
	cin >> t;
	while (t--) {
		timeRemaining = 1400;
		cnt = 0;
		cin >> n;
		int a[n];
		if (n < 2) {
			cout << "YES\n";
			continue;
		}
		for (int i = 0; i < n; ++i)
			cin >> a[i];
		for (int i = 0; i < n - 1; ++i) {
			timeRemaining -= (a[i + 1] - a[i]);
		}
		if (timeRemaining >= 200) {
			cout << "YES\n";
			continue;
		}
		for (int i = 0; i < n - 1; ++i) {
			if ((int) ((a[i + 1] - a[i]) / 120) >= 1)
				cnt += (int) ((a[i + 1] - a[i]) / 120);
		}
		if (cnt >= 2) cout << "YES " << cnt << '\n';
		else cout << "NO " << cnt << '\n';
	}
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	freopen("learning.INP", "r", stdin);
	solve();
}
