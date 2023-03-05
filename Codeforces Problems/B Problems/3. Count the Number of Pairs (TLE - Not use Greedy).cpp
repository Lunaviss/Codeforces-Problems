#include <bits/stdc++.h>

using namespace std;

void solve() {

	int trash; cin >> trash;
	int operationNumber; cin >> operationNumber;
	string str; cin >> str;
	int length = str.length();
	int boundaryPos = 0;
	int countPerfect = 0, countNotPerfect = 0;
	int total = 0;

	sort(str.begin(), str.end());
	for(int i = 0; i < length; ++i)
		if(str[i] >= 'a' && str[i] <= 'z') {
			boundaryPos = i;
			break;
		}
	for(int i = 0; i < boundaryPos; ++i) {
		if(str[i] == '@') continue;
		for(int j = boundaryPos; j < length; ++j) {
			if(str[j] == '@') continue;
			if(str[i] == str[j] - 32) {
				str[i] = '@';
				str[j] = '@';
				countPerfect++;
			}
		}
	}
	for(int i = 0; i < length; ++i) {
		if(str[i] == '@') continue;
		for(int j = 0; j < length; ++j) {
			if(str[j] == '@') continue;
			if(str[i] == str[j]) 
				if(i != j) {
					str[i] = '@';
					str[j] = '@';
					countNotPerfect++;
				}
		}
	}

	if(operationNumber == 0) {
		total += countPerfect;
	} else
		if(operationNumber >= countNotPerfect)
			total += countPerfect + countNotPerfect;
		else
			total += countPerfect + operationNumber;
	cout << total << '\n';
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	// freopen("learning.INP", "r", stdin);
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
