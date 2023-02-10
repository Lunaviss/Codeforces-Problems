#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, a, b, c, count = 0;
	cin >> n;
	while (n--)
	{
		cin >> a >> b >> c;
		if ((a + b + c) >= 2) ++count;
	}
	cout << count;
}
