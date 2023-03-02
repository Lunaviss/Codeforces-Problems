#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	while(true) {
		n++;
		string number = to_string(n); 
		if(number[0] != number[1] && number[0] != number[2] && number[0] != number[3] &&
			number[1] != number[2] && number[1] != number[3] &&
			number[2] != number[3]) {
				cout << number;
				break;
		}
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
