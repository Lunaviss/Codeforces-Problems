#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
	for (int i = 2; i*i <= n; ++i)
		if (n % i == 0) return false;
	return true;
}

int nextPrime(int n) {
	int i = n + 1;
	while(true) {
		if(isPrime(i)) return i;
		i++;
	}
}

void solve() {
	int n, m;
	cin >> n >> m;
	if(!isPrime(n)) {
		cout << "NO";
		return;
	}
	if(nextPrime(n) == m) {
		cout << "YES";
		return;
	}
	cout << "NO";
}

int main(int argc, char const *argv[])
{
  	ios::sync_with_stdio(0);
  	cin.tie(0); cout.tie(0);
  	solve();
  	return 0;
}
