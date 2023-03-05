#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	int a;
	int maxValue = 0, minValue = 101;
	int maxIndex = 0, minIndex = 0;
	for(int i = 0; i < n; ++i) {
		cin >> a;
		if(a > maxValue) {
			maxIndex = i;
			maxValue = a;
		}
		if(a <= minValue) {
			minIndex = i;
			minValue = a;
		}
	}
	if(maxIndex > minIndex)
		cout << (maxIndex - 1) + (n - minIndex) - 1;
	else
		cout << (maxIndex - 1) + (n - minIndex);
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	// freopen("learning.INP", "r", stdin);
	solve();
	return 0;
}
