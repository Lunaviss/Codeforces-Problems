#include<bits/stdc++.h>

using namespace std;

void solve() {
	int t;
	int trash;
	cin >> t;
	while(t--) {
		cin >> trash >> trash;
		string tower_1;
		string tower_2;
		cin >> tower_1 >> tower_2;
		reverse(tower_2.begin(), tower_2.end());
		string tower = tower_1 + tower_2;
		int cnt = 0;
		int i = 0;
		while(i < tower.length() && cnt <= 1) {
			if(tower[i] == tower[i + 1])
				cnt++;
			i++;
		}
		cout << ((cnt > 1) ? "NO\n" : "YES\n");
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
