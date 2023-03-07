#include <bits/stdc++.h>

using namespace std;

void solve() {
  int k, l, m, n, d;
  cin >> k >> l >> m >> n >> d;
  int result = d;
  for(int i = 1; i <= d; ++i)
    if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
      continue;
    else
      result--;
  cout << '\n' << result;
}

int main(int argc, char const *argv[])
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  // freopen("learning.INP", "r", stdin);
  solve();
  return 0;
}
