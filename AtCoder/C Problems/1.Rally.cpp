#include <bits/stdc++.h>

using namespace std;

const int positiveInfinity = 1000000000;

int square(int number) {
	return number*number;
}

void solve() {
	int N;
	cin >> N;
	int X[N];
	for(int i = 0; i < N; ++i)
		cin >> X[i];
	int L = X[0];
	int R = X[0];
	int ans = positiveInfinity;
	for(int i = 1; i < N; ++i) {
		L = min(L, X[i]);
		R = max(R, X[i]);
	}
	for(int i = L; i <= R; ++i) {
		int cost = 0;
		for(int j = 0; j < N; ++j)
			cost += square(X[j] - i);
		ans = min(ans, cost);
	}
	cout << ans;
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	// freopen("learning.INP", "r", stdin);
	solve();
	return 0;
}
