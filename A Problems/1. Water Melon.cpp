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
	int w;
	cin >> w;
	solve(w);
}
