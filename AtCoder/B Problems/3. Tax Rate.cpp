#include <bits/stdc++.h>

using namespace std;

void solve() {
  int N;
  cin >> N;
  int X = N/1.08;
  bool hasX = false;
  for(int i = X; i <= X+1; ++i)
    if((int) (i*1.08) == N) {
      X = i;
      hasX = true;
    }
  if(hasX) cout << X;
    else cout << ":(";
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  // freopen("learning.INP", "r", stdin);
  solve();
  return 0;
}
