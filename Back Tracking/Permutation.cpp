#include <bits/stdc++.h>

#define MAX 30

using namespace std;

int number[MAX];
bool isUsed[MAX];
int n;

void printAnswer() {
	for (int i = 1; i <= n; ++i) {
		cout << number[i];
	}
	cout << '\n';
}

void backtracking(int k) {
	for (int i = 1; i <= n; ++i) {
		if (!(isUsed[i])) {
			number[k] = i;
			isUsed[i] = true;
			if (k == n) printAnswer();
			else backtracking(k + 1);
			isUsed[i] = false;
		}
	}
}


int main(int argc, char const *argv[])
{
	cin >> n;
	backtracking(1);
}
