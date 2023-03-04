#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);    
	
	int A, B; cin >> A >> B;
	A--; B--;
	cout << (B+A-1)/A << endl;
	
	return 0;
}
