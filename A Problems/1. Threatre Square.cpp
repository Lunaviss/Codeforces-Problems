#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, m, a; 
	long long widthNeeded(0), heighNeeded(0);
	cin >> n >> m >> a;
	heighNeeded = (n % a == 0) ? (n / a) : ((int) n / a + 1);
	widthNeeded = (m % a == 0) ? (m / a) : ((int) m / a + 1);
	cout << heighNeeded * widthNeeded;	
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	// freopen("learning.INP", "r", stdin);
	solve();
	return 0;
}
