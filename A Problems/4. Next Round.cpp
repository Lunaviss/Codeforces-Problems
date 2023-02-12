#include <bits/stdc++.h>

using namespace std;

void solve(int score[], int size, int place) {
	int standard_score = score[place-1];
	int count = 0;
	if (standard_score > 0) {
		for (int i = 0; i < size; ++i) 
			if (score[i] >= standard_score) count++;
		cout << count;
		return;
	}
	else {
		for (int i = 0; i < size; ++i) 
			if (score[i] > standard_score) count++;
		cout << count;
		return;
	}
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; ++i) cin >> a[i];
	solve(a, n, k);
	return 0;
}
