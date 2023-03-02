#include <bits/stdc++.h>

using namespace std;

bool is_integer(float k)
{
  return floor(k) == k;
}

void solve() {
	long long k;
	int cnt = 0;
	cin >> k;
	long long const sqrt_k = sqrt(k);
	if(k == 1) {
		cout << 1;
		return;
	}
	for(long long i = 1; i <= sqrt_k; ++i) {
		long long b = sqrt(k - i*i);
		if(b == sqrt(k - i*i))
			cnt++;
	}
	// for(int i = 1; i <= sqrt_k; ++i) {
	// 	for(int j = sqrt_k; j >= 0; --j)
	// 		if(i*i + j*j == k) {
	// 			cout << "a = " << i << " b = " << j << '\n';
	// 			cnt++;
	// 		}
	// }
	cout << cnt;
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	solve();
	return 0;
}