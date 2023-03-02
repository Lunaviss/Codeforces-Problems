#include<bits/stdc++.h>

using namespace std;

void solve() {
	int t, w, h , n, size, count;
	cin >> t;
	while (t--) {
		count = 1;
		cin >> w >> h >> n;
		size = w*h;
		while (size % 2 == 0) {
			count *= 2;
			size /= 2;
		}
		cout << (count >= n ? "YES" : "NO") << '\n';
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
