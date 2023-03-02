#include<bits/stdc++.h>

using namespace std;

void solve() {
	int number;
	cin >> number;
	if(number % 2 == 1) {
		cout << -1;
		return;
	}
	for(int i = 1; i <= number; i+=2)
		cout << i + 1 << ' ' << i << ' ';
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	// freopen("learning.INP", "r", stdin);
	solve();
	return 0;
}
