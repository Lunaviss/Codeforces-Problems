#include <bits/stdc++.h>
 
using namespace std;
 
void solve(int w){
	if (w < 4) {
		cout << "NO";
		return;
	}
	if ((w - 2) % 2 == 0) cout << "YES"; 
	else cout << "NO";
}
 
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int w;
	cin >> w;
	solve(w);
}
