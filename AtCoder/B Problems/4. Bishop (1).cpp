#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
  ll rows, columns;
  cin >> rows >> columns;
  if(columns == 1 || rows == 1) {
    cout << 1;
    return;
  }
  if(columns % 2 == 0)
    cout << (columns / 2) * rows;
  else
    cout << (columns / 2) * (rows / 2) + (columns / 2 + 1) * (rows - (rows / 2));
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  // freopen("learning.INP", "r", stdin);
  solve();
  return 0;
}
