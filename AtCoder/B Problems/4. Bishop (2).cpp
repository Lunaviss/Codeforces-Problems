#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
  ll rows, columns;
  cin >> rows >> columns;
  if(columns == 1 || rows == 1)
    cout << 1;
  else 
    cout << (rows * columns + 1) / 2;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  // freopen("learning.INP", "r", stdin);
  solve();
  return 0;
}
