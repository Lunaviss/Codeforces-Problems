#include <bits/stdc++.h>

#define MAX 30

using namespace std;

int bit[MAX];
int n;

void printAnswer() {
	for (int i = 1; i <= n; ++i) {
		cout << bit[i];
	}
	cout << '\n';
}

void backtracking(int k) {
	for (int i = 0; i <= 1; ++i) {
		bit[k] = i;
		if (k == n) printAnswer();
		else backtracking(k + 1);
	}
}

int main(int argc, char const *argv[])
{
	cin >> n;
	backtracking(1);
}
