#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, t, i;
	cin >> n >> t;
	string queue;
	cin >> queue;
	while(t--) {
		i = 0;
		while (i < n) {
			if (queue[i] == 'B' && queue[i + 1] == 'G') {
				swap(queue[i], queue[i+1]);
				i+=2;
			}
			else i++;
		}
	}
	cout << queue;
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	// freopen("learning.INP", "r", stdin);
	solve();

	return 0;
}
